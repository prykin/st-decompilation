FUN_005fcf50:
005FCF50  55                        PUSH EBP
005FCF51  8B EC                     MOV EBP,ESP
005FCF53  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
005FCF56  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
005FCF59  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
005FCF5C  53                        PUSH EBX
005FCF5D  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
005FCF60  C7 02 00 00 00 00         MOV dword ptr [EDX],0x0
005FCF66  56                        PUSH ESI
005FCF67  57                        PUSH EDI
005FCF68  C6 03 00                  MOV byte ptr [EBX],0x0
005FCF6B  C6 00 1D                  MOV byte ptr [EAX],0x1d
005FCF6E  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
005FCF71  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
005FCF77  83 F8 0E                  CMP EAX,0xe
005FCF7A  74 05                     JZ 0x005fcf81
005FCF7C  83 F8 0C                  CMP EAX,0xc
005FCF7F  75 44                     JNZ 0x005fcfc5
LAB_005fcf81:
005FCF81  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005FCF84  48                        DEC EAX
005FCF85  74 14                     JZ 0x005fcf9b
005FCF87  48                        DEC EAX
005FCF88  74 0A                     JZ 0x005fcf94
005FCF8A  48                        DEC EAX
005FCF8B  75 38                     JNZ 0x005fcfc5
005FCF8D  BF D4 E4 7C 00            MOV EDI,0x7ce4d4
005FCF92  EB 0C                     JMP 0x005fcfa0
LAB_005fcf94:
005FCF94  BF DC E4 7C 00            MOV EDI,0x7ce4dc
005FCF99  EB 05                     JMP 0x005fcfa0
LAB_005fcf9b:
005FCF9B  BF E4 E4 7C 00            MOV EDI,0x7ce4e4
LAB_005fcfa0:
005FCFA0  83 C9 FF                  OR ECX,0xffffffff
005FCFA3  33 C0                     XOR EAX,EAX
005FCFA5  F2 AE                     SCASB.REPNE ES:EDI
005FCFA7  F7 D1                     NOT ECX
005FCFA9  2B F9                     SUB EDI,ECX
005FCFAB  8B C1                     MOV EAX,ECX
005FCFAD  8B F7                     MOV ESI,EDI
005FCFAF  8B FB                     MOV EDI,EBX
005FCFB1  C1 E9 02                  SHR ECX,0x2
005FCFB4  F3 A5                     MOVSD.REP ES:EDI,ESI
005FCFB6  8B C8                     MOV ECX,EAX
005FCFB8  83 E1 03                  AND ECX,0x3
005FCFBB  F3 A4                     MOVSB.REP ES:EDI,ESI
005FCFBD  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
005FCFC3  89 0A                     MOV dword ptr [EDX],ECX
LAB_005fcfc5:
005FCFC5  5F                        POP EDI
005FCFC6  5E                        POP ESI
005FCFC7  5B                        POP EBX
005FCFC8  5D                        POP EBP
005FCFC9  C3                        RET
