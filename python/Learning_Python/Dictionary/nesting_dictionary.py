student={
    "name" : 
    {

        "Fname":"sanjib",
        "Lname":"halder"
    },
    "subject":
    {
        "honours":"computer",
        "generic":"math"
    }
}

print(student)
print('\n')
print(student["name"])
print('\n')
print(student["subject"]["honours"])
print('\n')
print(len(student))
print(student.keys())
print(student.values())
print(student.items())
print(student.get("name"))
print(student.update({"add":"kpa"}))
print(student)

new_dict= {"city" : "kanchrapara"}
print(student.update(new_dict))
print(student)




