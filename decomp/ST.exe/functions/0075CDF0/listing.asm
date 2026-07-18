FUN_0075cdf0:
0075CDF0  55                        PUSH EBP
0075CDF1  8B EC                     MOV EBP,ESP
0075CDF3  56                        PUSH ESI
0075CDF4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0075CDF7  57                        PUSH EDI
0075CDF8  6A 1C                     PUSH 0x1c
0075CDFA  8B 06                     MOV EAX,dword ptr [ESI]
0075CDFC  6A 01                     PUSH 0x1
0075CDFE  56                        PUSH ESI
0075CDFF  FF 10                     CALL dword ptr [EAX]
0075CE01  8B F8                     MOV EDI,EAX
0075CE03  33 C9                     XOR ECX,ECX
0075CE05  89 BE 9E 01 00 00         MOV dword ptr [ESI + 0x19e],EDI
0075CE0B  C7 07 80 CE 75 00         MOV dword ptr [EDI],0x75ce80
0075CE11  89 4F 08                  MOV dword ptr [EDI + 0x8],ECX
0075CE14  89 4F 0C                  MOV dword ptr [EDI + 0xc],ECX
0075CE17  8B 46 4C                  MOV EAX,dword ptr [ESI + 0x4c]
0075CE1A  3B C1                     CMP EAX,ECX
0075CE1C  74 4D                     JZ 0x0075ce6b
0075CE1E  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0075CE21  8B 86 26 01 00 00         MOV EAX,dword ptr [ESI + 0x126]
0075CE27  3B D1                     CMP EDX,ECX
0075CE29  89 47 10                  MOV dword ptr [EDI + 0x10],EAX
0075CE2C  74 29                     JZ 0x0075ce57
0075CE2E  8B 4E 6C                  MOV ECX,dword ptr [ESI + 0x6c]
0075CE31  53                        PUSH EBX
0075CE32  8B 1E                     MOV EBX,dword ptr [ESI]
0075CE34  50                        PUSH EAX
0075CE35  50                        PUSH EAX
0075CE36  51                        PUSH ECX
0075CE37  E8 54 D0 FF FF            CALL 0x00759e90
0075CE3C  8B 56 70                  MOV EDX,dword ptr [ESI + 0x70]
0075CE3F  50                        PUSH EAX
0075CE40  0F AF 56 68               IMUL EDX,dword ptr [ESI + 0x68]
0075CE44  52                        PUSH EDX
0075CE45  6A 00                     PUSH 0x0
0075CE47  6A 01                     PUSH 0x1
0075CE49  56                        PUSH ESI
0075CE4A  FF 53 10                  CALL dword ptr [EBX + 0x10]
0075CE4D  89 47 08                  MOV dword ptr [EDI + 0x8],EAX
0075CE50  5B                        POP EBX
0075CE51  5F                        POP EDI
0075CE52  5E                        POP ESI
0075CE53  5D                        POP EBP
0075CE54  C2 08 00                  RET 0x8
LAB_0075ce57:
0075CE57  8B 56 70                  MOV EDX,dword ptr [ESI + 0x70]
0075CE5A  8B 0E                     MOV ECX,dword ptr [ESI]
0075CE5C  0F AF 56 68               IMUL EDX,dword ptr [ESI + 0x68]
0075CE60  50                        PUSH EAX
0075CE61  52                        PUSH EDX
0075CE62  6A 01                     PUSH 0x1
0075CE64  56                        PUSH ESI
0075CE65  FF 51 08                  CALL dword ptr [ECX + 0x8]
0075CE68  89 47 0C                  MOV dword ptr [EDI + 0xc],EAX
LAB_0075ce6b:
0075CE6B  5F                        POP EDI
0075CE6C  5E                        POP ESI
0075CE6D  5D                        POP EBP
0075CE6E  C2 08 00                  RET 0x8
