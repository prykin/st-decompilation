FUN_006d8036:
006D8036  80 7D D8 00               CMP byte ptr [EBP + -0x28],0x0
006D803A  75 20                     JNZ 0x006d805c
006D803C  80 7D D7 00               CMP byte ptr [EBP + -0x29],0x0
006D8040  75 07                     JNZ 0x006d8049
006D8042  E8 93 FF FF FF            CALL 0x006d7fda
006D8047  72 68                     JC 0x006d80b1
LAB_006d8049:
006D8049  8B 7D D2                  MOV EDI,dword ptr [EBP + -0x2e]
006D804C  8A 07                     MOV AL,byte ptr [EDI]
006D804E  88 45 D6                  MOV byte ptr [EBP + -0x2a],AL
006D8051  47                        INC EDI
006D8052  89 7D D2                  MOV dword ptr [EBP + -0x2e],EDI
006D8055  FE 4D D7                  DEC byte ptr [EBP + -0x29]
006D8058  C6 45 D8 08               MOV byte ptr [EBP + -0x28],0x8
LAB_006d805c:
006D805C  33 DB                     XOR EBX,EBX
006D805E  8A 5D F2                  MOV BL,byte ptr [EBP + -0xe]
006D8061  33 D2                     XOR EDX,EDX
006D8063  8A 55 D6                  MOV DL,byte ptr [EBP + -0x2a]
006D8066  B1 08                     MOV CL,0x8
006D8068  2A 4D D8                  SUB CL,byte ptr [EBP + -0x28]
006D806B  D2 EA                     SHR DL,CL
006D806D  8A 4D D8                  MOV CL,byte ptr [EBP + -0x28]
LAB_006d8070:
006D8070  3A D9                     CMP BL,CL
006D8072  7E 2E                     JLE 0x006d80a2
006D8074  80 7D D7 00               CMP byte ptr [EBP + -0x29],0x0
006D8078  75 0D                     JNZ 0x006d8087
006D807A  52                        PUSH EDX
006D807B  51                        PUSH ECX
006D807C  53                        PUSH EBX
006D807D  E8 58 FF FF FF            CALL 0x006d7fda
006D8082  5B                        POP EBX
006D8083  59                        POP ECX
006D8084  5A                        POP EDX
006D8085  72 2A                     JC 0x006d80b1
LAB_006d8087:
006D8087  8B 7D D2                  MOV EDI,dword ptr [EBP + -0x2e]
006D808A  8A 07                     MOV AL,byte ptr [EDI]
006D808C  88 45 D6                  MOV byte ptr [EBP + -0x2a],AL
006D808F  47                        INC EDI
006D8090  89 7D D2                  MOV dword ptr [EBP + -0x2e],EDI
006D8093  FE 4D D7                  DEC byte ptr [EBP + -0x29]
006D8096  32 E4                     XOR AH,AH
006D8098  D3 E0                     SHL EAX,CL
006D809A  66 0B D0                  OR DX,AX
006D809D  80 C1 08                  ADD CL,0x8
006D80A0  EB CE                     JMP 0x006d8070
LAB_006d80a2:
006D80A2  2A CB                     SUB CL,BL
006D80A4  88 4D D8                  MOV byte ptr [EBP + -0x28],CL
006D80A7  92                        XCHG EAX,EDX
006D80A8  D1 E3                     SHL EBX,0x1
006D80AA  66 23 83 1C 80 6D 00      AND AX,word ptr [EBX + 0x6d801c]
LAB_006d80b1:
006D80B1  C3                        RET
