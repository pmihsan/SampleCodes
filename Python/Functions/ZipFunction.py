name = ["Pm", "pm", "PM", "PM"]
lap = ["HP", "Dell", "Mac", "Mac"]

# zipped = zip(name,lap) # Creating a zip object out of the two list
# print(zipped)

# for a,b in zipped:
#     print("Name: {}, Laptop: {}".format(a,b))

# zipped = list(zip(name,lap)) # We can create a list out of the zipped one
# print(zipped)

# zipped = dict(zip(name,lap)) # We can create a dictionary out of the zipped one
# print(zipped)

# zipped = tuple(zip(name,lap)) # We can create a tuple out of the zipped one
# print(zipped)

# Similary we can also zip to create a set a well but it will unordered and will not contain duplicate values

zipped = set(zip(name,lap)) # We can create a set out of the zipped one
print(zipped)
