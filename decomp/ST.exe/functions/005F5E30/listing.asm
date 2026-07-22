STBHEShellC::sub_005F5E30:
005F5E30  55                        PUSH EBP
005F5E31  8B EC                     MOV EBP,ESP
005F5E33  56                        PUSH ESI
005F5E34  8B F1                     MOV ESI,ECX
005F5E36  8B 86 93 00 00 00         MOV EAX,dword ptr [ESI + 0x93]
005F5E3C  8B 8E 97 00 00 00         MOV ECX,dword ptr [ESI + 0x97]
005F5E42  8B 96 9B 00 00 00         MOV EDX,dword ptr [ESI + 0x9b]
005F5E48  89 86 9F 00 00 00         MOV dword ptr [ESI + 0x9f],EAX
005F5E4E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005F5E51  89 8E A3 00 00 00         MOV dword ptr [ESI + 0xa3],ECX
005F5E57  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005F5E5A  89 86 93 00 00 00         MOV dword ptr [ESI + 0x93],EAX
005F5E60  89 8E 97 00 00 00         MOV dword ptr [ESI + 0x97],ECX
005F5E66  8A 8E 03 01 00 00         MOV CL,byte ptr [ESI + 0x103]
005F5E6C  89 96 A7 00 00 00         MOV dword ptr [ESI + 0xa7],EDX
005F5E72  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
005F5E75  33 C0                     XOR EAX,EAX
005F5E77  C7 86 87 00 00 00 03 00 00 00  MOV dword ptr [ESI + 0x87],0x3
005F5E81  3A C8                     CMP CL,AL
005F5E83  89 96 9B 00 00 00         MOV dword ptr [ESI + 0x9b],EDX
005F5E89  C7 86 AF 00 00 00 1E 00 00 00  MOV dword ptr [ESI + 0xaf],0x1e
005F5E93  C7 86 B3 00 00 00 0B 00 00 00  MOV dword ptr [ESI + 0xb3],0xb
005F5E9D  C7 86 BC 00 00 00 14 00 00 00  MOV dword ptr [ESI + 0xbc],0x14
005F5EA7  89 86 B7 00 00 00         MOV dword ptr [ESI + 0xb7],EAX
005F5EAD  89 86 C0 00 00 00         MOV dword ptr [ESI + 0xc0],EAX
005F5EB3  89 86 AB 00 00 00         MOV dword ptr [ESI + 0xab],EAX
005F5EB9  74 09                     JZ 0x005f5ec4
005F5EBB  6A 03                     PUSH 0x3
005F5EBD  8B CE                     MOV ECX,ESI
005F5EBF  E8 F6 F6 E0 FF            CALL 0x004055ba
LAB_005f5ec4:
005F5EC4  8B 86 97 00 00 00         MOV EAX,dword ptr [ESI + 0x97]
005F5ECA  8B 8E 93 00 00 00         MOV ECX,dword ptr [ESI + 0x93]
005F5ED0  68 8A 04 00 00            PUSH 0x48a
005F5ED5  50                        PUSH EAX
005F5ED6  51                        PUSH ECX
005F5ED7  8B CE                     MOV ECX,ESI
005F5ED9  E8 70 C7 E0 FF            CALL 0x0040264e
005F5EDE  5E                        POP ESI
005F5EDF  5D                        POP EBP
005F5EE0  C2 0C 00                  RET 0xc
