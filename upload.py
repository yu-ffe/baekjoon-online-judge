import os
import subprocess

current_dir = os.getcwd()
readme_file = os.path.join(current_dir, 'README.md')
folders = [name for name in os.listdir(current_dir) if os.path.isdir(os.path.join(current_dir, name))]

readme_content = "# 폴더 목록 및 .cpp 파일 주소\n\n"

for folder in folders:
    folder_path = os.path.join(current_dir, folder)
    if '. ' in folder:
        cpp_files = [f for f in os.listdir(folder_path) if f.endswith('.cpp')]
        for cpp_file in cpp_files:
            readme_content += f"- {folder}(./{folder}/{cpp_file})\n"
    else:
        readme_content += f"- {folder}\n"

with open(readme_file, 'w', encoding='utf-8') as f:
    f.write(readme_content)

print("README.md 파일이 생성되었습니다.")


folder_path = os.getcwd()
repository_url = 'https://github.com/yu-ffe/baekjoon-online-judge.git'

subprocess.run(['git', 'init'])

try:
    subprocess.run(['git', 'remote', 'add', 'origin', repository_url])
except subprocess.CalledProcessError:
    print("원격 저장소가 이미 설정되어 있습니다.")

subprocess.run(['git', 'add', '.'])
subprocess.run(['git', 'commit', '-m', 'Initial commit'])

# 원격 저장소에서 최신 데이터를 가져옵니다.
subprocess.run(['git', 'pull', 'origin', 'main', '--rebase'])

# 변경 사항을 푸시합니다.
subprocess.run(['git', 'push', '-u', 'origin', 'main'])

print("폴더가 GitHub에 성공적으로 업로드되었습니다.")
