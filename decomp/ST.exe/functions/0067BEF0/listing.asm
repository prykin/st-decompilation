AiPlrClassTy::sub_0067BEF0:
0067BEF0  8B 81 8D 06 00 00         MOV EAX,dword ptr [ECX + 0x68d]
0067BEF6  40                        INC EAX
0067BEF7  3D 00 01 00 00            CMP EAX,0x100
0067BEFC  89 81 8D 06 00 00         MOV dword ptr [ECX + 0x68d],EAX
0067BF02  7C 08                     JL 0x0067bf0c
0067BF04  3D 00 04 00 00            CMP EAX,0x400
0067BF09  7F 01                     JG 0x0067bf0c
0067BF0B  C3                        RET
LAB_0067bf0c:
0067BF0C  C7 81 8D 06 00 00 00 01 00 00  MOV dword ptr [ECX + 0x68d],0x100
0067BF16  66 B8 00 01               MOV AX,0x100
0067BF1A  C3                        RET
