FUN_00746e65:
00746E65  55                        PUSH EBP
00746E66  8B EC                     MOV EBP,ESP
00746E68  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00746E6B  53                        PUSH EBX
00746E6C  56                        PUSH ESI
00746E6D  57                        PUSH EDI
00746E6E  6A 10                     PUSH 0x10
00746E70  BF 68 13 7A 00            MOV EDI,0x7a1368
00746E75  5A                        POP EDX
00746E76  8B F0                     MOV ESI,EAX
00746E78  8B CA                     MOV ECX,EDX
00746E7A  33 DB                     XOR EBX,EBX
00746E7C  F3 A6                     CMPSB.REPE ES:EDI,ESI
00746E7E  74 1E                     JZ 0x00746e9e
00746E80  8B CA                     MOV ECX,EDX
00746E82  BF C0 1A 7A 00            MOV EDI,0x7a1ac0
00746E87  8B F0                     MOV ESI,EAX
00746E89  33 DB                     XOR EBX,EBX
00746E8B  F3 A6                     CMPSB.REPE ES:EDI,ESI
00746E8D  74 0F                     JZ 0x00746e9e
00746E8F  8B CA                     MOV ECX,EDX
00746E91  BF C8 22 7A 00            MOV EDI,0x7a22c8
00746E96  8B F0                     MOV ESI,EAX
00746E98  33 DB                     XOR EBX,EBX
00746E9A  F3 A6                     CMPSB.REPE ES:EDI,ESI
00746E9C  75 0D                     JNZ 0x00746eab
LAB_00746e9e:
00746E9E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00746EA1  FF 75 10                  PUSH dword ptr [EBP + 0x10]
00746EA4  8B C8                     MOV ECX,EAX
00746EA6  83 C0 0C                  ADD EAX,0xc
00746EA9  EB 1A                     JMP 0x00746ec5
LAB_00746eab:
00746EAB  FF 75 10                  PUSH dword ptr [EBP + 0x10]
00746EAE  8B CA                     MOV ECX,EDX
00746EB0  BF D0 1A 7A 00            MOV EDI,0x7a1ad0
00746EB5  8B F0                     MOV ESI,EAX
00746EB7  33 D2                     XOR EDX,EDX
00746EB9  F3 A6                     CMPSB.REPE ES:EDI,ESI
00746EBB  75 16                     JNZ 0x00746ed3
00746EBD  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00746EC0  8B C8                     MOV ECX,EAX
00746EC2  83 C0 10                  ADD EAX,0x10
LAB_00746ec5:
00746EC5  F7 D9                     NEG ECX
00746EC7  1B C9                     SBB ECX,ECX
00746EC9  23 C8                     AND ECX,EAX
00746ECB  51                        PUSH ECX
00746ECC  E8 D5 49 00 00            CALL 0x0074b8a6
00746ED1  EB 09                     JMP 0x00746edc
LAB_00746ed3:
00746ED3  50                        PUSH EAX
00746ED4  FF 75 08                  PUSH dword ptr [EBP + 0x8]
00746ED7  E8 34 49 00 00            CALL 0x0074b810
LAB_00746edc:
00746EDC  5F                        POP EDI
00746EDD  5E                        POP ESI
00746EDE  5B                        POP EBX
00746EDF  5D                        POP EBP
00746EE0  C2 0C 00                  RET 0xc
