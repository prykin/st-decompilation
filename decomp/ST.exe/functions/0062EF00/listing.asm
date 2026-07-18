FUN_0062ef00:
0062EF00  55                        PUSH EBP
0062EF01  8B EC                     MOV EBP,ESP
0062EF03  56                        PUSH ESI
0062EF04  57                        PUSH EDI
0062EF05  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0062EF08  8B F1                     MOV ESI,ECX
0062EF0A  33 C0                     XOR EAX,EAX
0062EF0C  8B 8C BE E5 01 00 00      MOV ECX,dword ptr [ESI + EDI*0x4 + 0x1e5]
0062EF13  85 C9                     TEST ECX,ECX
0062EF15  0F 84 03 01 00 00         JZ 0x0062f01e
0062EF1B  53                        PUSH EBX
0062EF1C  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0062EF1F  66 8B 43 28               MOV AX,word ptr [EBX + 0x28]
0062EF23  89 41 14                  MOV dword ptr [ECX + 0x14],EAX
0062EF26  8B 8C BE E5 01 00 00      MOV ECX,dword ptr [ESI + EDI*0x4 + 0x1e5]
0062EF2D  8B 53 14                  MOV EDX,dword ptr [EBX + 0x14]
0062EF30  89 51 20                  MOV dword ptr [ECX + 0x20],EDX
0062EF33  8B 84 BE E5 01 00 00      MOV EAX,dword ptr [ESI + EDI*0x4 + 0x1e5]
0062EF3A  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
0062EF3D  89 48 24                  MOV dword ptr [EAX + 0x24],ECX
0062EF40  8B 94 BE E5 01 00 00      MOV EDX,dword ptr [ESI + EDI*0x4 + 0x1e5]
0062EF47  8B 43 1C                  MOV EAX,dword ptr [EBX + 0x1c]
0062EF4A  89 42 28                  MOV dword ptr [EDX + 0x28],EAX
0062EF4D  8B 8C BE E5 01 00 00      MOV ECX,dword ptr [ESI + EDI*0x4 + 0x1e5]
0062EF54  8B 53 20                  MOV EDX,dword ptr [EBX + 0x20]
0062EF57  89 11                     MOV dword ptr [ECX],EDX
0062EF59  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0062EF5F  8B 84 BE E5 01 00 00      MOV EAX,dword ptr [ESI + EDI*0x4 + 0x1e5]
0062EF66  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
0062EF6C  89 50 35                  MOV dword ptr [EAX + 0x35],EDX
0062EF6F  8B 84 BE E5 01 00 00      MOV EAX,dword ptr [ESI + EDI*0x4 + 0x1e5]
0062EF76  33 D2                     XOR EDX,EDX
0062EF78  C7 40 39 B8 0B 00 00      MOV dword ptr [EAX + 0x39],0xbb8
0062EF7F  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
0062EF82  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
0062EF88  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
0062EF8E  B9 05 00 00 00            MOV ECX,0x5
0062EF93  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0062EF96  C1 E8 10                  SHR EAX,0x10
0062EF99  F7 F1                     DIV ECX
0062EF9B  8B 84 BE E5 01 00 00      MOV EAX,dword ptr [ESI + EDI*0x4 + 0x1e5]
0062EFA2  89 50 1C                  MOV dword ptr [EAX + 0x1c],EDX
0062EFA5  8B 8C BE E5 01 00 00      MOV ECX,dword ptr [ESI + EDI*0x4 + 0x1e5]
0062EFAC  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0062EFAF  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
0062EFB5  52                        PUSH EDX
0062EFB6  E8 61 68 DD FF            CALL 0x0040581c
0062EFBB  50                        PUSH EAX
0062EFBC  8B CE                     MOV ECX,ESI
0062EFBE  E8 32 49 DD FF            CALL 0x004038f5
0062EFC3  8B 8C BE E5 01 00 00      MOV ECX,dword ptr [ESI + EDI*0x4 + 0x1e5]
0062EFCA  89 41 2C                  MOV dword ptr [ECX + 0x2c],EAX
0062EFCD  8B 53 28                  MOV EDX,dword ptr [EBX + 0x28]
0062EFD0  8B 84 BE E5 01 00 00      MOV EAX,dword ptr [ESI + EDI*0x4 + 0x1e5]
0062EFD7  33 C9                     XOR ECX,ECX
0062EFD9  C1 EA 10                  SHR EDX,0x10
0062EFDC  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
0062EFDF  8B 94 BE E5 01 00 00      MOV EDX,dword ptr [ESI + EDI*0x4 + 0x1e5]
0062EFE6  66 8B 4B 24               MOV CX,word ptr [EBX + 0x24]
0062EFEA  89 4A 0C                  MOV dword ptr [EDX + 0xc],ECX
0062EFED  8B 84 BE E5 01 00 00      MOV EAX,dword ptr [ESI + EDI*0x4 + 0x1e5]
0062EFF4  8B 4B 2C                  MOV ECX,dword ptr [EBX + 0x2c]
0062EFF7  5B                        POP EBX
0062EFF8  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
0062EFFB  8B 94 BE E5 01 00 00      MOV EDX,dword ptr [ESI + EDI*0x4 + 0x1e5]
0062F002  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
0062F005  83 F8 03                  CMP EAX,0x3
0062F008  74 05                     JZ 0x0062f00f
0062F00A  83 F8 06                  CMP EAX,0x6
0062F00D  75 0A                     JNZ 0x0062f019
LAB_0062f00f:
0062F00F  6A 01                     PUSH 0x1
0062F011  57                        PUSH EDI
0062F012  8B CE                     MOV ECX,ESI
0062F014  E8 B0 60 DD FF            CALL 0x004050c9
LAB_0062f019:
0062F019  B8 01 00 00 00            MOV EAX,0x1
LAB_0062f01e:
0062F01E  5F                        POP EDI
0062F01F  5E                        POP ESI
0062F020  5D                        POP EBP
0062F021  C2 08 00                  RET 0x8
