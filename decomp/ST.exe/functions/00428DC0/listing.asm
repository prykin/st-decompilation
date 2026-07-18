FUN_00428dc0:
00428DC0  55                        PUSH EBP
00428DC1  8B EC                     MOV EBP,ESP
00428DC3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00428DC6  53                        PUSH EBX
00428DC7  0F AF 45 10               IMUL EAX,dword ptr [EBP + 0x10]
00428DCB  56                        PUSH ESI
00428DCC  57                        PUSH EDI
00428DCD  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
00428DD0  33 DB                     XOR EBX,EBX
00428DD2  33 C9                     XOR ECX,ECX
00428DD4  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
00428DD7  8A 65 1C                  MOV AH,byte ptr [EBP + 0x1c]
00428DDA  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00428DDD  B0 FF                     MOV AL,0xff
00428DDF  55                        PUSH EBP
00428DE0  8B 6D 0C                  MOV EBP,dword ptr [EBP + 0xc]
00428DE3  C1 ED 02                  SHR EBP,0x2
LAB_00428de6:
00428DE6  8B 17                     MOV EDX,dword ptr [EDI]
00428DE8  83 C7 04                  ADD EDI,0x4
00428DEB  83 FA FF                  CMP EDX,-0x1
00428DEE  75 05                     JNZ 0x00428df5
00428DF0  4D                        DEC EBP
00428DF1  7F F3                     JG 0x00428de6
00428DF3  EB 2A                     JMP 0x00428e1f
LAB_00428df5:
00428DF5  8A DA                     MOV BL,DL
00428DF7  8A CE                     MOV CL,DH
00428DF9  3A D0                     CMP DL,AL
00428DFB  74 03                     JZ 0x00428e00
00428DFD  08 24 1E                  OR byte ptr [ESI + EBX*0x1],AH
LAB_00428e00:
00428E00  C1 EA 10                  SHR EDX,0x10
00428E03  3A C8                     CMP CL,AL
00428E05  8A DA                     MOV BL,DL
00428E07  74 03                     JZ 0x00428e0c
00428E09  08 24 0E                  OR byte ptr [ESI + ECX*0x1],AH
LAB_00428e0c:
00428E0C  3A D0                     CMP DL,AL
00428E0E  74 03                     JZ 0x00428e13
00428E10  08 24 1E                  OR byte ptr [ESI + EBX*0x1],AH
LAB_00428e13:
00428E13  8A CE                     MOV CL,DH
00428E15  3A F0                     CMP DH,AL
00428E17  74 03                     JZ 0x00428e1c
00428E19  08 24 0E                  OR byte ptr [ESI + ECX*0x1],AH
LAB_00428e1c:
00428E1C  4D                        DEC EBP
00428E1D  7F C7                     JG 0x00428de6
LAB_00428e1f:
00428E1F  5D                        POP EBP
00428E20  5F                        POP EDI
00428E21  5E                        POP ESI
00428E22  5B                        POP EBX
00428E23  5D                        POP EBP
00428E24  C3                        RET
