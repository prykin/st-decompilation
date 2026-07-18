_memset:
0073B410  8B 54 24 0C               MOV EDX,dword ptr [ESP + 0xc]
0073B414  8B 4C 24 04               MOV ECX,dword ptr [ESP + 0x4]
0073B418  85 D2                     TEST EDX,EDX
0073B41A  74 47                     JZ 0x0073b463
0073B41C  33 C0                     XOR EAX,EAX
0073B41E  8A 44 24 08               MOV AL,byte ptr [ESP + 0x8]
0073B422  57                        PUSH EDI
0073B423  8B F9                     MOV EDI,ECX
0073B425  83 FA 04                  CMP EDX,0x4
0073B428  72 2D                     JC 0x0073b457
0073B42A  F7 D9                     NEG ECX
0073B42C  83 E1 03                  AND ECX,0x3
0073B42F  74 08                     JZ 0x0073b439
0073B431  2B D1                     SUB EDX,ECX
LAB_0073b433:
0073B433  88 07                     MOV byte ptr [EDI],AL
0073B435  47                        INC EDI
0073B436  49                        DEC ECX
0073B437  75 FA                     JNZ 0x0073b433
LAB_0073b439:
0073B439  8B C8                     MOV ECX,EAX
0073B43B  C1 E0 08                  SHL EAX,0x8
0073B43E  03 C1                     ADD EAX,ECX
0073B440  8B C8                     MOV ECX,EAX
0073B442  C1 E0 10                  SHL EAX,0x10
0073B445  03 C1                     ADD EAX,ECX
0073B447  8B CA                     MOV ECX,EDX
0073B449  83 E2 03                  AND EDX,0x3
0073B44C  C1 E9 02                  SHR ECX,0x2
0073B44F  74 06                     JZ 0x0073b457
0073B451  F3 AB                     STOSD.REP ES:EDI
0073B453  85 D2                     TEST EDX,EDX
0073B455  74 06                     JZ 0x0073b45d
LAB_0073b457:
0073B457  88 07                     MOV byte ptr [EDI],AL
0073B459  47                        INC EDI
0073B45A  4A                        DEC EDX
0073B45B  75 FA                     JNZ 0x0073b457
LAB_0073b45d:
0073B45D  8B 44 24 08               MOV EAX,dword ptr [ESP + 0x8]
0073B461  5F                        POP EDI
0073B462  C3                        RET
LAB_0073b463:
0073B463  8B 44 24 04               MOV EAX,dword ptr [ESP + 0x4]
0073B467  C3                        RET
