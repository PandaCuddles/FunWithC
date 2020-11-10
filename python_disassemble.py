# Looking at python bytecode
import dis


def byte_cookinator(name):
	"byte_cookinator function"

	honorary_title = f"{name}: The Food Cookinator"

	return f"{honorary_title} is your name."

print("\n\nPython dissassembly:")
dis.dis(byte_cookinator)

code_info = dis.code_info(byte_cookinator)
print("\n\n", "Python code_info:", "\n", code_info)

bytecode = dis.Bytecode(byte_cookinator)
print("\n\n", "Python bytecode info:", "\n", bytecode, "\n\n")

for i in bytecode:
	print(i)
