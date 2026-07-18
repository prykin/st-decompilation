FUN_006c4110:
006C4110  55                        PUSH EBP
006C4111  8B EC                     MOV EBP,ESP
006C4113  53                        PUSH EBX
006C4114  56                        PUSH ESI
006C4115  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C4118  57                        PUSH EDI
006C4119  8D 9E 08 05 00 00         LEA EBX,[ESI + 0x508]
006C411F  53                        PUSH EBX
006C4120  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
006C4126  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006C4129  33 FF                     XOR EDI,EDI
006C412B  A9 00 00 00 20            TEST EAX,0x20000000
006C4130  0F 84 BC 00 00 00         JZ 0x006c41f2
006C4136  8B 46 50                  MOV EAX,dword ptr [ESI + 0x50]
006C4139  85 C0                     TEST EAX,EAX
006C413B  0F 84 99 00 00 00         JZ 0x006c41da
006C4141  8B 08                     MOV ECX,dword ptr [EAX]
006C4143  8D BE CC 00 00 00         LEA EDI,[ESI + 0xcc]
006C4149  57                        PUSH EDI
006C414A  50                        PUSH EAX
006C414B  FF 51 14                  CALL dword ptr [ECX + 0x14]
006C414E  85 C0                     TEST EAX,EAX
006C4150  74 06                     JZ 0x006c4158
006C4152  C7 07 00 CA 9A 3B         MOV dword ptr [EDI],0x3b9aca00
LAB_006c4158:
006C4158  8B 46 50                  MOV EAX,dword ptr [ESI + 0x50]
006C415B  8D BE D0 00 00 00         LEA EDI,[ESI + 0xd0]
006C4161  57                        PUSH EDI
006C4162  50                        PUSH EAX
006C4163  8B 10                     MOV EDX,dword ptr [EAX]
006C4165  FF 52 1C                  CALL dword ptr [EDX + 0x1c]
006C4168  85 C0                     TEST EAX,EAX
006C416A  74 06                     JZ 0x006c4172
006C416C  C7 07 00 CA 9A 3B         MOV dword ptr [EDI],0x3b9aca00
LAB_006c4172:
006C4172  8B 46 50                  MOV EAX,dword ptr [ESI + 0x50]
006C4175  8D BE D4 00 00 00         LEA EDI,[ESI + 0xd4]
006C417B  57                        PUSH EDI
006C417C  50                        PUSH EAX
006C417D  8B 08                     MOV ECX,dword ptr [EAX]
006C417F  FF 51 20                  CALL dword ptr [ECX + 0x20]
006C4182  85 C0                     TEST EAX,EAX
006C4184  74 06                     JZ 0x006c418c
006C4186  C7 07 00 CA 9A 3B         MOV dword ptr [EDI],0x3b9aca00
LAB_006c418c:
006C418C  8B 46 50                  MOV EAX,dword ptr [ESI + 0x50]
006C418F  8D BE D8 00 00 00         LEA EDI,[ESI + 0xd8]
006C4195  57                        PUSH EDI
006C4196  50                        PUSH EAX
006C4197  8B 10                     MOV EDX,dword ptr [EAX]
006C4199  FF 52 10                  CALL dword ptr [EDX + 0x10]
006C419C  85 C0                     TEST EAX,EAX
006C419E  74 06                     JZ 0x006c41a6
006C41A0  C7 07 00 CA 9A 3B         MOV dword ptr [EDI],0x3b9aca00
LAB_006c41a6:
006C41A6  8B 46 50                  MOV EAX,dword ptr [ESI + 0x50]
006C41A9  8D BE DC 00 00 00         LEA EDI,[ESI + 0xdc]
006C41AF  57                        PUSH EDI
006C41B0  50                        PUSH EAX
006C41B1  8B 08                     MOV ECX,dword ptr [EAX]
006C41B3  FF 51 0C                  CALL dword ptr [ECX + 0xc]
006C41B6  85 C0                     TEST EAX,EAX
006C41B8  74 06                     JZ 0x006c41c0
006C41BA  C7 07 00 CA 9A 3B         MOV dword ptr [EDI],0x3b9aca00
LAB_006c41c0:
006C41C0  8B 46 50                  MOV EAX,dword ptr [ESI + 0x50]
006C41C3  8D BE E0 00 00 00         LEA EDI,[ESI + 0xe0]
006C41C9  57                        PUSH EDI
006C41CA  50                        PUSH EAX
006C41CB  8B 10                     MOV EDX,dword ptr [EAX]
006C41CD  FF 52 18                  CALL dword ptr [EDX + 0x18]
006C41D0  85 C0                     TEST EAX,EAX
006C41D2  74 06                     JZ 0x006c41da
006C41D4  C7 07 00 CA 9A 3B         MOV dword ptr [EDI],0x3b9aca00
LAB_006c41da:
006C41DA  8B 46 5C                  MOV EAX,dword ptr [ESI + 0x5c]
006C41DD  50                        PUSH EAX
006C41DE  8B 08                     MOV ECX,dword ptr [EAX]
006C41E0  FF 51 24                  CALL dword ptr [ECX + 0x24]
006C41E3  8B F8                     MOV EDI,EAX
006C41E5  85 FF                     TEST EDI,EDI
006C41E7  7E 02                     JLE 0x006c41eb
006C41E9  33 FF                     XOR EDI,EDI
LAB_006c41eb:
006C41EB  81 66 04 FF FF FF DF      AND dword ptr [ESI + 0x4],0xdfffffff
LAB_006c41f2:
006C41F2  53                        PUSH EBX
006C41F3  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006C41F9  85 FF                     TEST EDI,EDI
006C41FB  74 20                     JZ 0x006c421d
006C41FD  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006C4203  68 37 03 00 00            PUSH 0x337
006C4208  68 80 DE 7E 00            PUSH 0x7ede80
006C420D  52                        PUSH EDX
006C420E  57                        PUSH EDI
006C420F  E8 2C 1C FE FF            CALL 0x006a5e40
006C4214  8B C7                     MOV EAX,EDI
006C4216  5F                        POP EDI
006C4217  5E                        POP ESI
006C4218  5B                        POP EBX
006C4219  5D                        POP EBP
006C421A  C2 04 00                  RET 0x4
LAB_006c421d:
006C421D  5F                        POP EDI
006C421E  5E                        POP ESI
006C421F  33 C0                     XOR EAX,EAX
006C4221  5B                        POP EBX
006C4222  5D                        POP EBP
006C4223  C2 04 00                  RET 0x4
