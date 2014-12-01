.data

.code
cmpArray16 proc
	movaps xmm0, xmmword ptr [rcx]	; Move a[16] into XMM0
	pcmpeqb xmm0, xmmword ptr [rdx]	; Compare it to b[16]
	pmovmskb eax, xmm0				; Move sign masks to EAX
	popcnt eax, eax		; Return the population count
	ret
cmpArray16 endp
end