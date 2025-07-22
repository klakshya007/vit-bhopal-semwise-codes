import matplotlib.pyplot as plt

C={'Batch 1': 120, 'Batch 2': 80, 'Batch 3': 95, 'Batch 4': 100, 'Batch 5': 60}

batches= list(C.keys())
children= list(C.values())

fig = plt.figure(figsize = (10, 5))

plt.bar(batches, children , color ='red', width =.5, edgecolor='black')

plt.xlabel("Batches")
plt.ylabel("No. Of hildren")
plt.title("DIfferent Batches Of An Educational Institute")
plt.show()
