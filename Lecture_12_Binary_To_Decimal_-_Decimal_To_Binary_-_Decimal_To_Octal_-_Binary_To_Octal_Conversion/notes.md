# Lecture 12: Binary ↔ Decimal ↔ Octal Conversions

### Key Concepts

1. **Binary to Decimal**
   - Each binary digit (bit) represents a power of 2.
   - Formula:  
     `Decimal = (b_n × 2^n) + (b_(n-1) × 2^(n-1)) + ... + (b_0 × 2^0)`
   - Example: `1011₂ = 1×2³ + 0×2² + 1×2¹ + 1×2⁰ = 11₁₀`

2. **Decimal to Binary**
   - Divide the decimal number by 2 repeatedly.
   - Collect remainders in reverse order.
   - Example: `13₁₀ → 1101₂`

3. **Decimal to Octal**
   - Divide the decimal number by 8 repeatedly.
   - Collect remainders in reverse order.
   - Example: `65₁₀ → 101₈`

4. **Binary to Octal**
   - Group binary digits into sets of **3 bits** (from right).
   - Convert each group into its octal equivalent.
   - Example: `101110₂ → (101)(110) → 56₈`

5. **Octal/Decimal Conversion**
   - Octal → Decimal: multiply each digit by powers of 8.
   - Decimal → Octal: repeated division by 8.

6. **Handling Negative Numbers**
   - Represented in **2’s complement form**.
   - To convert negative to binary:  
     - Take binary of positive number.  
     - Invert all bits (1’s complement).  
     - Add 1.

---

### Programs Discussed
- Convert **binary to decimal**.
- Convert **decimal to binary**.
- Convert **decimal to octal**.
- Convert **binary to octal**.
- Explain **negative numbers in binary (2’s complement)**.
