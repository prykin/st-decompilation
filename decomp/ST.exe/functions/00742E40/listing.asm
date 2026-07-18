FUN_00742e40:
00742E40  55                        PUSH EBP
00742E41  8B EC                     MOV EBP,ESP
00742E43  51                        PUSH ECX
00742E44  53                        PUSH EBX
00742E45  56                        PUSH ESI
00742E46  57                        PUSH EDI
LAB_00742e47:
00742E47  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
00742E4B  75 1E                     JNZ 0x00742e6b
00742E4D  68 50 FE 79 00            PUSH 0x79fe50
00742E52  6A 00                     PUSH 0x0
00742E54  6A 2E                     PUSH 0x2e
00742E56  68 B0 0F 7A 00            PUSH 0x7a0fb0
00742E5B  6A 02                     PUSH 0x2
00742E5D  E8 3E E1 FE FF            CALL 0x00730fa0
00742E62  83 C4 14                  ADD ESP,0x14
00742E65  83 F8 01                  CMP EAX,0x1
00742E68  75 01                     JNZ 0x00742e6b
00742E6A  CC                        INT3
LAB_00742e6b:
00742E6B  33 C0                     XOR EAX,EAX
00742E6D  85 C0                     TEST EAX,EAX
00742E6F  75 D6                     JNZ 0x00742e47
00742E71  8B 0D 04 74 85 00         MOV ECX,dword ptr [0x00857404]
00742E77  83 C1 01                  ADD ECX,0x1
00742E7A  89 0D 04 74 85 00         MOV dword ptr [0x00857404],ECX
00742E80  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00742E83  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00742E86  6A 3B                     PUSH 0x3b
00742E88  68 B0 0F 7A 00            PUSH 0x7a0fb0
00742E8D  6A 02                     PUSH 0x2
00742E8F  68 00 10 00 00            PUSH 0x1000
00742E94  E8 6B E2 CB FF            CALL 0x00401104
00742E99  83 C4 10                  ADD ESP,0x10
00742E9C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00742E9F  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
00742EA2  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00742EA5  83 7A 08 00               CMP dword ptr [EDX + 0x8],0x0
00742EA9  74 1B                     JZ 0x00742ec6
00742EAB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00742EAE  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00742EB1  83 C9 08                  OR ECX,0x8
00742EB4  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00742EB7  89 4A 0C                  MOV dword ptr [EDX + 0xc],ECX
00742EBA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00742EBD  C7 40 18 00 10 00 00      MOV dword ptr [EAX + 0x18],0x1000
00742EC4  EB 25                     JMP 0x00742eeb
LAB_00742ec6:
00742EC6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00742EC9  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
00742ECC  83 CA 04                  OR EDX,0x4
00742ECF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00742ED2  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
00742ED5  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00742ED8  83 C1 14                  ADD ECX,0x14
00742EDB  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00742EDE  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
00742EE1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00742EE4  C7 40 18 02 00 00 00      MOV dword ptr [EAX + 0x18],0x2
LAB_00742eeb:
00742EEB  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00742EEE  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00742EF1  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
00742EF4  89 01                     MOV dword ptr [ECX],EAX
00742EF6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00742EF9  C7 41 04 00 00 00 00      MOV dword ptr [ECX + 0x4],0x0
00742F00  5F                        POP EDI
00742F01  5E                        POP ESI
00742F02  5B                        POP EBX
00742F03  8B E5                     MOV ESP,EBP
00742F05  5D                        POP EBP
00742F06  C3                        RET
