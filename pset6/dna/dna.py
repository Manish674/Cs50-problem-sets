import sys

if len(sys.argv) != 3:
    print("Usage: database sequence")
    exit()
csv_file = open(sys.argv[1])

strands = []
persons = {}

for index, row in enumerate(csv_file):
    if index == 0:
        strands = [strand for strand in row.strip().split(',')]
        strands.pop(0)

    else:
        curr_row = row.strip().split(',')
        persons[curr_row[0]] = curr_row[1:]

seq_file = open(sys.argv[2])
seq_read = seq_file.read()
# AGATC,AATG,TATC
AGATC = 0
AATG = 0
TATC = 0

final_strand = []
for strand in strands:
    i = 0
    curr_max = 0
    max_strand = -1
    while i < len(seq_read):
        curr_slice = seq_read[i: i + len(strand)]
        if curr_slice == strand:
            curr_max += 1
            max_strand = max(max_strand, curr_max)
            i += len(strand)
        else:
            i += 1
            curr_max = 0
    final_strand.append(max_strand)

for name,data in persons.items(): 
    print(f"DATA {data}")
    print(f"Final strand {final_strand}")
    print(name)
    exit(1)

print('No match')