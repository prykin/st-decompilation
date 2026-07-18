FUN_0075e890:
0075E890  55                        PUSH EBP
0075E891  8B EC                     MOV EBP,ESP
0075E893  81 EC 84 01 00 00         SUB ESP,0x184
0075E899  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075E89C  53                        PUSH EBX
0075E89D  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
0075E8A0  56                        PUSH ESI
0075E8A1  8B 88 BA 01 00 00         MOV ECX,dword ptr [EAX + 0x1ba]
0075E8A7  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0075E8AA  57                        PUSH EDI
0075E8AB  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0075E8AE  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
0075E8B1  8D 8D 7C FE FF FF         LEA ECX,[EBP + 0xfffffe7c]
0075E8B7  C1 FB 02                  SAR EBX,0x2
0075E8BA  C1 FF 03                  SAR EDI,0x3
0075E8BD  C1 FE 02                  SAR ESI,0x2
0075E8C0  89 5D 14                  MOV dword ptr [EBP + 0x14],EBX
0075E8C3  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
0075E8C6  C1 E3 05                  SHL EBX,0x5
0075E8C9  89 75 0C                  MOV dword ptr [EBP + 0xc],ESI
0075E8CC  83 C3 04                  ADD EBX,0x4
0075E8CF  C1 E7 05                  SHL EDI,0x5
0075E8D2  C1 E6 05                  SHL ESI,0x5
0075E8D5  83 C7 02                  ADD EDI,0x2
0075E8D8  51                        PUSH ECX
0075E8D9  83 C6 04                  ADD ESI,0x4
0075E8DC  53                        PUSH EBX
0075E8DD  57                        PUSH EDI
0075E8DE  56                        PUSH ESI
0075E8DF  50                        PUSH EAX
0075E8E0  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0075E8E3  E8 98 00 00 00            CALL 0x0075e980
0075E8E8  8D 95 7C FF FF FF         LEA EDX,[EBP + 0xffffff7c]
0075E8EE  8D 8D 7C FE FF FF         LEA ECX,[EBP + 0xfffffe7c]
0075E8F4  52                        PUSH EDX
0075E8F5  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0075E8F8  51                        PUSH ECX
0075E8F9  50                        PUSH EAX
0075E8FA  53                        PUSH EBX
0075E8FB  57                        PUSH EDI
0075E8FC  56                        PUSH ESI
0075E8FD  52                        PUSH EDX
0075E8FE  E8 3D 02 00 00            CALL 0x0075eb40
0075E903  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0075E906  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0075E909  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0075E90C  C7 45 08 04 00 00 00      MOV dword ptr [EBP + 0x8],0x4
0075E913  C1 E0 02                  SHL EAX,0x2
0075E916  C1 E2 03                  SHL EDX,0x3
0075E919  C1 E1 02                  SHL ECX,0x2
0075E91C  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
0075E91F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0075E922  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
0075E925  8D 95 7C FF FF FF         LEA EDX,[EBP + 0xffffff7c]
0075E92B  8D 3C 81                  LEA EDI,[ECX + EAX*0x4]
LAB_0075e92e:
0075E92E  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0075E931  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
0075E934  C1 E1 05                  SHL ECX,0x5
0075E937  03 CE                     ADD ECX,ESI
0075E939  C7 45 0C 08 00 00 00      MOV dword ptr [EBP + 0xc],0x8
0075E940  D1 E1                     SHL ECX,0x1
LAB_0075e942:
0075E942  8B 07                     MOV EAX,dword ptr [EDI]
0075E944  BE 04 00 00 00            MOV ESI,0x4
0075E949  03 C1                     ADD EAX,ECX
LAB_0075e94b:
0075E94B  66 0F B6 1A               MOVZX BX,byte ptr [EDX]
0075E94F  43                        INC EBX
0075E950  66 89 18                  MOV word ptr [EAX],BX
0075E953  83 C0 02                  ADD EAX,0x2
0075E956  42                        INC EDX
0075E957  4E                        DEC ESI
0075E958  75 F1                     JNZ 0x0075e94b
0075E95A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0075E95D  83 C1 40                  ADD ECX,0x40
0075E960  48                        DEC EAX
0075E961  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0075E964  75 DC                     JNZ 0x0075e942
0075E966  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075E969  83 C7 04                  ADD EDI,0x4
0075E96C  48                        DEC EAX
0075E96D  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0075E970  75 BC                     JNZ 0x0075e92e
0075E972  5F                        POP EDI
0075E973  5E                        POP ESI
0075E974  5B                        POP EBX
0075E975  8B E5                     MOV ESP,EBP
0075E977  5D                        POP EBP
0075E978  C2 10 00                  RET 0x10
