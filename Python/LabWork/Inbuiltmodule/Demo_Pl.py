import platform

print(platform.architecture())
print(platform.processor())
print(platform.machine())
print(platform.python_version())
print(platform.node())
print(platform.system())
print('windows version : ',platform.win32_edition())
print('User Name : ',platform.uname())