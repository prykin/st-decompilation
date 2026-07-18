FUN_0072ea90:
0072EA90  55                        PUSH EBP
0072EA91  8B EC                     MOV EBP,ESP
0072EA93  83 EC 08                  SUB ESP,0x8
0072EA96  53                        PUSH EBX
0072EA97  56                        PUSH ESI
0072EA98  57                        PUSH EDI
0072EA99  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0072EAA0  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072EAA3  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0072EAA6  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0072EAA9  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
0072EAAC  83 E2 40                  AND EDX,0x40
0072EAAF  85 D2                     TEST EDX,EDX
0072EAB1  74 12                     JZ 0x0072eac5
0072EAB3  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0072EAB6  C7 40 0C 00 00 00 00      MOV dword ptr [EAX + 0xc],0x0
0072EABD  83 C8 FF                  OR EAX,0xffffffff
0072EAC0  E9 A1 00 00 00            JMP 0x0072eb66
LAB_0072eac5:
0072EAC5  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
0072EAC9  75 1E                     JNZ 0x0072eae9
0072EACB  68 50 FE 79 00            PUSH 0x79fe50
0072EAD0  6A 00                     PUSH 0x0
0072EAD2  6A 77                     PUSH 0x77
0072EAD4  68 44 FE 79 00            PUSH 0x79fe44
0072EAD9  6A 02                     PUSH 0x2
0072EADB  E8 C0 24 00 00            CALL 0x00730fa0
0072EAE0  83 C4 14                  ADD ESP,0x14
0072EAE3  83 F8 01                  CMP EAX,0x1
0072EAE6  75 01                     JNZ 0x0072eae9
0072EAE8  CC                        INT3
LAB_0072eae9:
0072EAE9  33 C9                     XOR ECX,ECX
0072EAEB  85 C9                     TEST ECX,ECX
0072EAED  75 D6                     JNZ 0x0072eac5
0072EAEF  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0072EAF2  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
0072EAF5  25 83 00 00 00            AND EAX,0x83
0072EAFA  85 C0                     TEST EAX,EAX
0072EAFC  74 5B                     JZ 0x0072eb59
0072EAFE  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0072EB01  51                        PUSH ECX
0072EB02  E8 B9 52 00 00            CALL 0x00733dc0
0072EB07  83 C4 04                  ADD ESP,0x4
0072EB0A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0072EB0D  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0072EB10  52                        PUSH EDX
0072EB11  E8 EA 86 00 00            CALL 0x00737200
0072EB16  83 C4 04                  ADD ESP,0x4
0072EB19  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0072EB1C  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
0072EB1F  51                        PUSH ECX
0072EB20  E8 EB 85 00 00            CALL 0x00737110
0072EB25  83 C4 04                  ADD ESP,0x4
0072EB28  85 C0                     TEST EAX,EAX
0072EB2A  7D 09                     JGE 0x0072eb35
0072EB2C  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0072EB33  EB 24                     JMP 0x0072eb59
LAB_0072eb35:
0072EB35  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0072EB38  83 7A 1C 00               CMP dword ptr [EDX + 0x1c],0x0
0072EB3C  74 1B                     JZ 0x0072eb59
0072EB3E  6A 02                     PUSH 0x2
0072EB40  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0072EB43  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0072EB46  51                        PUSH ECX
0072EB47  E8 C0 59 CD FF            CALL 0x0040450c
0072EB4C  83 C4 08                  ADD ESP,0x8
0072EB4F  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0072EB52  C7 42 1C 00 00 00 00      MOV dword ptr [EDX + 0x1c],0x0
LAB_0072eb59:
0072EB59  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0072EB5C  C7 40 0C 00 00 00 00      MOV dword ptr [EAX + 0xc],0x0
0072EB63  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0072eb66:
0072EB66  5F                        POP EDI
0072EB67  5E                        POP ESI
0072EB68  5B                        POP EBX
0072EB69  8B E5                     MOV ESP,EBP
0072EB6B  5D                        POP EBP
0072EB6C  C3                        RET
