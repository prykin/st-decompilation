FUN_0072ff20:
0072FF20  55                        PUSH EBP
0072FF21  8B EC                     MOV EBP,ESP
0072FF23  83 EC 18                  SUB ESP,0x18
0072FF26  56                        PUSH ESI
LAB_0072ff27:
0072FF27  83 3D 8C 14 7F 00 01      CMP dword ptr [0x007f148c],0x1
0072FF2E  7E 17                     JLE 0x0072ff47
0072FF30  6A 08                     PUSH 0x8
0072FF32  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072FF35  33 C9                     XOR ECX,ECX
0072FF37  8A 08                     MOV CL,byte ptr [EAX]
0072FF39  51                        PUSH ECX
0072FF3A  E8 D1 06 00 00            CALL 0x00730610
0072FF3F  83 C4 08                  ADD ESP,0x8
0072FF42  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0072FF45  EB 19                     JMP 0x0072ff60
LAB_0072ff47:
0072FF47  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0072FF4A  33 C0                     XOR EAX,EAX
0072FF4C  8A 02                     MOV AL,byte ptr [EDX]
0072FF4E  8B 0D 80 12 7F 00         MOV ECX,dword ptr [0x007f1280]
0072FF54  33 D2                     XOR EDX,EDX
0072FF56  66 8B 14 41               MOV DX,word ptr [ECX + EAX*0x2]
0072FF5A  83 E2 08                  AND EDX,0x8
0072FF5D  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
LAB_0072ff60:
0072FF60  83 7D EC 00               CMP dword ptr [EBP + -0x14],0x0
0072FF64  74 0B                     JZ 0x0072ff71
0072FF66  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072FF69  83 C0 01                  ADD EAX,0x1
0072FF6C  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0072FF6F  EB B6                     JMP 0x0072ff27
LAB_0072ff71:
0072FF71  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0072FF74  33 D2                     XOR EDX,EDX
0072FF76  8A 11                     MOV DL,byte ptr [ECX]
0072FF78  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0072FF7B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072FF7E  83 C0 01                  ADD EAX,0x1
0072FF81  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0072FF84  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0072FF87  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0072FF8A  83 7D FC 2D               CMP dword ptr [EBP + -0x4],0x2d
0072FF8E  74 06                     JZ 0x0072ff96
0072FF90  83 7D FC 2B               CMP dword ptr [EBP + -0x4],0x2b
0072FF94  75 13                     JNZ 0x0072ffa9
LAB_0072ff96:
0072FF96  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0072FF99  33 C0                     XOR EAX,EAX
0072FF9B  8A 02                     MOV AL,byte ptr [EDX]
0072FF9D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0072FFA0  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0072FFA3  83 C1 01                  ADD ECX,0x1
0072FFA6  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
LAB_0072ffa9:
0072FFA9  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0072FFB0  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
LAB_0072ffb7:
0072FFB7  83 3D 8C 14 7F 00 01      CMP dword ptr [0x007f148c],0x1
0072FFBE  7E 13                     JLE 0x0072ffd3
0072FFC0  6A 04                     PUSH 0x4
0072FFC2  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0072FFC5  52                        PUSH EDX
0072FFC6  E8 45 06 00 00            CALL 0x00730610
0072FFCB  83 C4 08                  ADD ESP,0x8
0072FFCE  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0072FFD1  EB 15                     JMP 0x0072ffe8
LAB_0072ffd3:
0072FFD3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0072FFD6  8B 0D 80 12 7F 00         MOV ECX,dword ptr [0x007f1280]
0072FFDC  33 D2                     XOR EDX,EDX
0072FFDE  66 8B 14 41               MOV DX,word ptr [ECX + EAX*0x2]
0072FFE2  83 E2 04                  AND EDX,0x4
0072FFE5  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
LAB_0072ffe8:
0072FFE8  83 7D E8 00               CMP dword ptr [EBP + -0x18],0x0
0072FFEC  74 3B                     JZ 0x00730029
0072FFEE  6A 00                     PUSH 0x0
0072FFF0  6A 0A                     PUSH 0xa
0072FFF2  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0072FFF5  50                        PUSH EAX
0072FFF6  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0072FFF9  51                        PUSH ECX
0072FFFA  E8 F1 E4 FF FF            CALL 0x0072e4f0
0072FFFF  8B C8                     MOV ECX,EAX
00730001  8B F2                     MOV ESI,EDX
00730003  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00730006  83 E8 30                  SUB EAX,0x30
00730009  99                        CDQ
0073000A  03 C8                     ADD ECX,EAX
0073000C  13 F2                     ADC ESI,EDX
0073000E  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00730011  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
00730014  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00730017  33 C0                     XOR EAX,EAX
00730019  8A 02                     MOV AL,byte ptr [EDX]
0073001B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0073001E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00730021  83 C1 01                  ADD ECX,0x1
00730024  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
00730027  EB 8E                     JMP 0x0072ffb7
LAB_00730029:
00730029  83 7D F0 2D               CMP dword ptr [EBP + -0x10],0x2d
0073002D  75 0F                     JNZ 0x0073003e
0073002F  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00730032  F7 D8                     NEG EAX
00730034  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00730037  83 D2 00                  ADC EDX,0x0
0073003A  F7 DA                     NEG EDX
0073003C  EB 06                     JMP 0x00730044
LAB_0073003e:
0073003E  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00730041  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
LAB_00730044:
00730044  5E                        POP ESI
00730045  8B E5                     MOV ESP,EBP
00730047  5D                        POP EBP
00730048  C3                        RET
