.data
v_a: .word 0
.align 2
.text
.globl main
main:
move $fp $sp
addiu $sp $sp -4
sw $ra 4($sp)
li $a0 5
addiu $sp $sp -4
sw $a0 4($sp)
li $a0 4
addiu $sp $sp -4
sw $a0 4($sp)
li $a0 3
addiu $sp $sp -4
sw $a0 4($sp)
li $a0 2
lw $t1 4($sp)
add $a0 $a0 $t1
addiu $sp $sp 4
lw $t1 4($sp)
add $a0 $a0 $t1
addiu $sp $sp 4
lw $t1 4($sp)
mult $a0 $t1
mflo $a0
addiu $sp $sp 4
sw $a0 v_a
li $a0 0
li $v0 17
syscall
