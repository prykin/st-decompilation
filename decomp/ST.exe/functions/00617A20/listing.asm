FUN_00617a20:
00617A20  55                        PUSH EBP
00617A21  8B EC                     MOV EBP,ESP
00617A23  56                        PUSH ESI
00617A24  8B 71 5E                  MOV ESI,dword ptr [ECX + 0x5e]
00617A27  33 C0                     XOR EAX,EAX
00617A29  57                        PUSH EDI
00617A2A  85 F6                     TEST ESI,ESI
00617A2C  74 40                     JZ 0x00617a6e
00617A2E  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
00617A31  33 FF                     XOR EDI,EDI
00617A33  85 D2                     TEST EDX,EDX
00617A35  7E 37                     JLE 0x00617a6e
00617A37  53                        PUSH EBX
00617A38  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00617A3B  3B FA                     CMP EDI,EDX
LAB_00617a3d:
00617A3D  73 0B                     JNC 0x00617a4a
00617A3F  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
00617A42  0F AF D7                  IMUL EDX,EDI
00617A45  03 56 1C                  ADD EDX,dword ptr [ESI + 0x1c]
00617A48  EB 02                     JMP 0x00617a4c
LAB_00617a4a:
00617A4A  33 D2                     XOR EDX,EDX
LAB_00617a4c:
00617A4C  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00617A4F  39 72 20                  CMP dword ptr [EDX + 0x20],ESI
00617A52  75 0E                     JNZ 0x00617a62
00617A54  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00617A57  89 5A 18                  MOV dword ptr [EDX + 0x18],EBX
00617A5A  89 42 1C                  MOV dword ptr [EDX + 0x1c],EAX
00617A5D  B8 01 00 00 00            MOV EAX,0x1
LAB_00617a62:
00617A62  8B 71 5E                  MOV ESI,dword ptr [ECX + 0x5e]
00617A65  47                        INC EDI
00617A66  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
00617A69  3B FA                     CMP EDI,EDX
00617A6B  7C D0                     JL 0x00617a3d
00617A6D  5B                        POP EBX
LAB_00617a6e:
00617A6E  5F                        POP EDI
00617A6F  5E                        POP ESI
00617A70  5D                        POP EBP
00617A71  C2 0C 00                  RET 0xc
