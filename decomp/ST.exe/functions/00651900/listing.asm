FUN_00651900:
00651900  55                        PUSH EBP
00651901  8B EC                     MOV EBP,ESP
00651903  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00651906  33 C9                     XOR ECX,ECX
00651908  BA 08 00 00 00            MOV EDX,0x8
LAB_0065190d:
0065190D  38 94 08 D0 00 00 00      CMP byte ptr [EAX + ECX*0x1 + 0xd0],DL
00651914  0F 85 92 00 00 00         JNZ 0x006519ac
0065191A  41                        INC ECX
0065191B  83 F9 04                  CMP ECX,0x4
0065191E  7C ED                     JL 0x0065190d
00651920  66 8B 08                  MOV CX,word ptr [EAX]
00651923  66 83 F9 05               CMP CX,0x5
00651927  7D 09                     JGE 0x00651932
00651929  C7 40 18 32 00 00 00      MOV dword ptr [EAX + 0x18],0x32
00651930  EB 08                     JMP 0x0065193a
LAB_00651932:
00651932  38 90 D4 00 00 00         CMP byte ptr [EAX + 0xd4],DL
00651938  75 72                     JNZ 0x006519ac
LAB_0065193a:
0065193A  66 83 F9 06               CMP CX,0x6
0065193E  7D 09                     JGE 0x00651949
00651940  C7 40 1C 00 00 00 00      MOV dword ptr [EAX + 0x1c],0x0
00651947  EB 08                     JMP 0x00651951
LAB_00651949:
00651949  38 90 D5 00 00 00         CMP byte ptr [EAX + 0xd5],DL
0065194F  75 5B                     JNZ 0x006519ac
LAB_00651951:
00651951  66 83 F9 07               CMP CX,0x7
00651955  7D 09                     JGE 0x00651960
00651957  C7 40 20 01 00 00 00      MOV dword ptr [EAX + 0x20],0x1
0065195E  EB 08                     JMP 0x00651968
LAB_00651960:
00651960  38 90 D6 00 00 00         CMP byte ptr [EAX + 0xd6],DL
00651966  75 44                     JNZ 0x006519ac
LAB_00651968:
00651968  66 3B CA                  CMP CX,DX
0065196B  7D 09                     JGE 0x00651976
0065196D  C7 40 24 FF FF FF 3F      MOV dword ptr [EAX + 0x24],0x3fffffff
00651974  EB 08                     JMP 0x0065197e
LAB_00651976:
00651976  38 90 D7 00 00 00         CMP byte ptr [EAX + 0xd7],DL
0065197C  75 2E                     JNZ 0x006519ac
LAB_0065197e:
0065197E  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
00651981  85 C9                     TEST ECX,ECX
00651983  7C 27                     JL 0x006519ac
00651985  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
00651988  85 C9                     TEST ECX,ECX
0065198A  7C 20                     JL 0x006519ac
0065198C  83 F9 02                  CMP ECX,0x2
0065198F  7F 1B                     JG 0x006519ac
00651991  83 78 18 64               CMP dword ptr [EAX + 0x18],0x64
00651995  7C 07                     JL 0x0065199e
00651997  C7 40 18 63 00 00 00      MOV dword ptr [EAX + 0x18],0x63
LAB_0065199e:
0065199E  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
006519A1  33 C9                     XOR ECX,ECX
006519A3  85 D2                     TEST EDX,EDX
006519A5  0F 9D C1                  SETGE CL
006519A8  8B C1                     MOV EAX,ECX
006519AA  5D                        POP EBP
006519AB  C3                        RET
LAB_006519ac:
006519AC  33 C0                     XOR EAX,EAX
006519AE  5D                        POP EBP
006519AF  C3                        RET
