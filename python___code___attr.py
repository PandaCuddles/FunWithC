# Looking at a python function's __code__ attribute

def byte_cookinator(name):
	"byte_cookinator function"
	honorary_title = f"{name}: The Food Cookinator"
	return f"{honorary_title} is your name."



def inspect_function(func):
    print(func.__code__.co_code)
    print(func.__code__.co_consts)
    print(func.__code__.co_stacksize)
    print(func.__code__.co_varnames)
    print(func.__code__.co_flags)
    print(func.__code__.co_name)
    print(func.__code__.co_names)
    
inspect_function(byte_cookinator)
