## Varsity-C
This repository contains my practice work in the C programming language as part of my university studies in Robotics and AI. It reflects my journey from foundational concepts to more advanced problem-solving techniques.
### Purpose
The goal of this repository is to:
Strengthen my understanding of core C programming concepts 
Build a strong foundation in low-level programming
Improve problem-solving and logical thinking skills
Prepare for advanced topics such as systems programming, embedded systems, and cybersecurity

### Compilation and Execution
To compile and run any C program in this repository:

1. Navigate to the workspace directory:
   ```bash
   cd Varsity-C
   ```

2. Compile the program using `gcc`:
   ```bash
   gcc <filename>.c -o <filename>
   ```

3. Run the executable:
   ```bash
   ./<filename>
   ```

**Example (arithmetic.c):**
```bash
gcc arithmetic.c -o arithmetic
./arithmetic
```

**Alternative (compile and run in one step):**
```bash
gcc arithmetic.c -o arithmetic && ./arithmetic
```

If `gcc` is not available on macOS, use `clang` instead:
```bash
clang arithmetic.c -o arithmetic && ./arithmetic
```
