import matplotlib.pyplot as plt

def process_number(num):
    sequence = [num]
    
    while num != 1:
        if num % 2 != 0:
            num = num * 3 + 1
        else:
            num = num // 2
        sequence.append(num)
    
    return sequence

def plot_sequences(all_sequences):
    plt.figure(figsize=(10, 6))
    for i, sequence in enumerate(all_sequences, start=1):
        plt.plot(sequence, marker='o', linestyle='-', label=f'Input {i}')

    plt.title("Sequences Generated by the Algorithm")
    plt.xlabel("Step")
    plt.ylabel("Value")
    plt.grid(True)
    plt.legend()
    plt.show()

def main():
    all_sequences = []
    for num in range(1, 10):
        sequence = process_number(num)
        all_sequences.append(sequence)

    plot_sequences(all_sequences)

if __name__ == "__main__":
    main()
