### 问题陈述

我们需要判断以下级数的收敛性，并假设 \( |q| < 1 \)：

\[
\sum_{n=1}^{\infty} n q^{n-1}
\]

### 初步观察

首先，观察级数的一般项：

\[
a_n = n q^{n-1}
\]

这是一个关于 \( n \) 的几何级数的变种，其中每一项都乘以 \( n \)。已知当 \( |q| < 1 \) 时，简单的几何级数 \( \sum_{n=0}^{\infty} q^n \) 收敛。现在我们需要探讨当每一项乘以 \( n \) 后，级数的收敛性。

### 级数收敛的判别法

为了判断级数的收敛性，可以应用以下几种常见的判别法：

1. **比值判别法（Ratio Test）**：
   - 计算 \( \lim_{n \to \infty} \left| \frac{a_{n+1}}{a_n} \right| \)。
   - 如果极限小于 1，级数绝对收敛；大于 1，级数发散；等于 1，判别法失效。

2. **根值判别法（Root Test）**：
   - 计算 \( \lim_{n \to \infty} \sqrt[n]{|a_n|} \)。
   - 类似于比值判别法，根据极限值与 1 的关系判断收敛性。

3. **比较判别法**：
   - 将给定级数与已知收敛或发散的级数进行比较。

对于这个级数，比值判别法可能是一个直接的选择。

### 应用比值判别法

计算：

\[
\left| \frac{a_{n+1}}{a_n} \right| = \left| \frac{(n+1) q^n}{n q^{n-1}} \right| = \left| \frac{n+1}{n} q \right| = \frac{n+1}{n} |q|
\]

取极限：

\[
\lim_{n \to \infty} \frac{n+1}{n} |q| = |q|
\]

因为 \( |q| < 1 \)，所以根据比值判别法，级数 \( \sum_{n=1}^{\infty} n q^{n-1} \) 绝对收敛。

### 求和的具体值

虽然题目只要求判断收敛性，但我们可以进一步求出这个级数的和。已知：

\[
\sum_{n=0}^{\infty} q^n = \frac{1}{1 - q}, \quad |q| < 1
\]

对两边关于 \( q \) 求导：

\[
\frac{d}{dq} \left( \sum_{n=0}^{\infty} q^n \right) = \sum_{n=0}^{\infty} n q^{n-1} = \frac{d}{dq} \left( \frac{1}{1 - q} \right) = \frac{1}{(1 - q)^2}
\]

注意到：

\[
\sum_{n=0}^{\infty} n q^{n-1} = \sum_{n=1}^{\infty} n q^{n-1} = \frac{1}{(1 - q)^2}
\]

因为 \( n = 0 \) 时项为零。因此：

\[
\sum_{n=1}^{\infty} n q^{n-1} = \frac{1}{(1 - q)^2}, \quad |q| < 1
\]

这验证了级数的收敛性，并给出了其和的具体表达式。

### 其他判别法的验证

为了全面性，我们可以用根值判别法验证：

计算：

\[
\sqrt[n]{|a_n|} = \sqrt[n]{n |q|^{n-1}} = n^{1/n} |q|^{1 - 1/n}
\]

取极限：

\[
\lim_{n \to \infty} n^{1/n} = 1, \quad \lim_{n \to \infty} |q|^{1 - 1/n} = |q|
\]

因此：

\[
\lim_{n \to \infty} \sqrt[n]{|a_n|} = |q| < 1
\]

根据根值判别法，级数绝对收敛。

### 结论

综上所述：

- 对于 \( |q| < 1 \)，级数 \( \sum_{n=1}^{\infty} n q^{n-1} \) 绝对收敛。
- 其和为 \( \frac{1}{(1 - q)^2} \)。

### 最终答案

级数 \( \sum_{n=1}^{\infty} n q^{n-1} \) 在 \( |q| < 1 \) 时**绝对收敛**，且其和为：

\[
\sum_{n=1}^{\infty} n q^{n-1} = \frac{1}{(1 - q)^2}, \quad |q| < 1
\]