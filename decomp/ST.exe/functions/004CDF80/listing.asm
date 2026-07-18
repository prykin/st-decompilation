FUN_004cdf80:
004CDF80  55                        PUSH EBP
004CDF81  8B EC                     MOV EBP,ESP
004CDF83  56                        PUSH ESI
004CDF84  8B B1 24 05 00 00         MOV ESI,dword ptr [ECX + 0x524]
004CDF8A  33 C0                     XOR EAX,EAX
004CDF8C  33 D2                     XOR EDX,EDX
004CDF8E  57                        PUSH EDI
004CDF8F  85 F6                     TEST ESI,ESI
004CDF91  7E 20                     JLE 0x004cdfb3
004CDF93  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004CDF96  81 C1 D0 04 00 00         ADD ECX,0x4d0
LAB_004cdf9c:
004CDF9C  39 39                     CMP dword ptr [ECX],EDI
004CDF9E  74 0E                     JZ 0x004cdfae
004CDFA0  42                        INC EDX
004CDFA1  83 C1 04                  ADD ECX,0x4
004CDFA4  3B D6                     CMP EDX,ESI
004CDFA6  7C F4                     JL 0x004cdf9c
004CDFA8  5F                        POP EDI
004CDFA9  5E                        POP ESI
004CDFAA  5D                        POP EBP
004CDFAB  C2 04 00                  RET 0x4
LAB_004cdfae:
004CDFAE  B8 01 00 00 00            MOV EAX,0x1
LAB_004cdfb3:
004CDFB3  5F                        POP EDI
004CDFB4  5E                        POP ESI
004CDFB5  5D                        POP EBP
004CDFB6  C2 04 00                  RET 0x4
