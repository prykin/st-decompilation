FUN_004e4e90:
004E4E90  55                        PUSH EBP
004E4E91  8B EC                     MOV EBP,ESP
004E4E93  53                        PUSH EBX
004E4E94  56                        PUSH ESI
004E4E95  8B F1                     MOV ESI,ECX
004E4E97  57                        PUSH EDI
004E4E98  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
004E4E9E  85 C9                     TEST ECX,ECX
004E4EA0  74 58                     JZ 0x004e4efa
004E4EA2  83 BE D4 04 00 00 28      CMP dword ptr [ESI + 0x4d4],0x28
004E4EA9  7C 4F                     JL 0x004e4efa
004E4EAB  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004E4EAE  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004E4EB1  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004E4EB4  6A 07                     PUSH 0x7
004E4EB6  50                        PUSH EAX
004E4EB7  6A 02                     PUSH 0x2
004E4EB9  57                        PUSH EDI
004E4EBA  53                        PUSH EBX
004E4EBB  E8 E7 F1 F1 FF            CALL 0x004040a7
004E4EC0  85 C0                     TEST EAX,EAX
004E4EC2  75 36                     JNZ 0x004e4efa
004E4EC4  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004E4EC7  68 F4 01 00 00            PUSH 0x1f4
004E4ECC  6A 07                     PUSH 0x7
004E4ECE  51                        PUSH ECX
004E4ECF  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
004E4ED5  6A 02                     PUSH 0x2
004E4ED7  57                        PUSH EDI
004E4ED8  53                        PUSH EBX
004E4ED9  E8 F4 D0 F1 FF            CALL 0x00401fd2
004E4EDE  C7 86 D4 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4d4],0x0
004E4EE8  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004E4EEE  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004E4EF4  89 86 D8 04 00 00         MOV dword ptr [ESI + 0x4d8],EAX
LAB_004e4efa:
004E4EFA  5F                        POP EDI
004E4EFB  5E                        POP ESI
004E4EFC  33 C0                     XOR EAX,EAX
004E4EFE  5B                        POP EBX
004E4EFF  5D                        POP EBP
004E4F00  C2 0C 00                  RET 0xc
