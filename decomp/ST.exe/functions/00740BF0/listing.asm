__dosmaperr:
00740BF0  55                        PUSH EBP
00740BF1  8B EC                     MOV EBP,ESP
00740BF3  51                        PUSH ECX
00740BF4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00740BF7  A3 4C 71 85 00            MOV [0x0085714c],EAX
00740BFC  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00740C03  EB 09                     JMP 0x00740c0e
LAB_00740c05:
00740C05  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00740C08  83 C1 01                  ADD ECX,0x1
00740C0B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00740c0e:
00740C0E  83 7D FC 2D               CMP dword ptr [EBP + -0x4],0x2d
00740C12  73 23                     JNC 0x00740c37
00740C14  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00740C17  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00740C1A  3B 04 D5 D8 24 7F 00      CMP EAX,dword ptr [EDX*0x8 + 0x7f24d8]
00740C21  75 12                     JNZ 0x00740c35
00740C23  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00740C26  8B 14 CD DC 24 7F 00      MOV EDX,dword ptr [ECX*0x8 + 0x7f24dc]
00740C2D  89 15 48 71 85 00         MOV dword ptr [0x00857148],EDX
00740C33  EB 42                     JMP 0x00740c77
LAB_00740c35:
00740C35  EB CE                     JMP 0x00740c05
LAB_00740c37:
00740C37  83 7D 08 13               CMP dword ptr [EBP + 0x8],0x13
00740C3B  72 12                     JC 0x00740c4f
00740C3D  83 7D 08 24               CMP dword ptr [EBP + 0x8],0x24
00740C41  77 0C                     JA 0x00740c4f
00740C43  C7 05 48 71 85 00 0D 00 00 00  MOV dword ptr [0x00857148],0xd
00740C4D  EB 28                     JMP 0x00740c77
LAB_00740c4f:
00740C4F  81 7D 08 BC 00 00 00      CMP dword ptr [EBP + 0x8],0xbc
00740C56  72 15                     JC 0x00740c6d
00740C58  81 7D 08 CA 00 00 00      CMP dword ptr [EBP + 0x8],0xca
00740C5F  77 0C                     JA 0x00740c6d
00740C61  C7 05 48 71 85 00 08 00 00 00  MOV dword ptr [0x00857148],0x8
00740C6B  EB 0A                     JMP 0x00740c77
LAB_00740c6d:
00740C6D  C7 05 48 71 85 00 16 00 00 00  MOV dword ptr [0x00857148],0x16
LAB_00740c77:
00740C77  8B E5                     MOV ESP,EBP
00740C79  5D                        POP EBP
00740C7A  C3                        RET
