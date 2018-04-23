.data
v_a: .word 0
.align 2
.text
.globl main
fact:
move $fp $sp
addiu $sp $sp -4
sw $ra 4($sp)
li $a0 1
addiu $sp $sp -4
sw $a0 4($sp)
lw $a0 4($fp)
lw $t1 4($sp)
slt $t2 $a0 $t1
slt $t3 $t1 $a0
or $a0 $t2 $t3
xori $a0 $a0 1
addiu $sp $sp 4
beq $a0 $zero _label0
li $a0 1
lw $ra 0($fp)
addiu $sp $fp 8
lw $fp 4($sp)
jr $ra
j _label1
_label0:
addiu $sp $sp -4
sw $fp 4($sp)
li $a0 1
addiu $sp $sp -4
sw $a0 4($sp)
lw $a0 4($fp)
lw $t1 4($sp)
sub $a0 $a0 $t1
addiu $sp $sp 4
addiu $sp $sp -4
sw $a0 4($sp)
jal fact
addiu $sp $sp -4
sw $a0 4($sp)
lw $a0 4($fp)
lw $t1 4($sp)
mult $a0 $t1
mflo $a0
addiu $sp $sp 4
lw $ra 0($fp)
addiu $sp $fp 8
lw $fp 4($sp)
jr $ra
_label1:
main:
move $fp $sp
addiu $sp $sp -4
sw $ra 4($sp)
addiu $sp $sp -4
sw $fp 4($sp)
li $a0 5
addiu $sp $sp -4
sw $a0 4($sp)
jal fact
sw $a0 v_a
lw $a0 v_a
li $v0 17
syscall
li $a0 0
li $v0 17
syscall
