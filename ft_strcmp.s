global ft_strcmp

ft_strcmp:
	xor	rcx, rcx
	xor	rax, rax

loop:
	cmp	byte[rdi + rcx], 0
	jz	return
	cmp	byte[rsi + rcx], 0
	jz	return
	mov	al, byte[rsi, rcx]
	cmp	byte[rdi, rcx], al
	jnz	return
	inc	rcx
	jmp	loop

return:
	movzx	rax, byte[rdi + rcx]
	movzx	rdx, byte[rsi + rcx]
	sub	rax, rdx
	ret

