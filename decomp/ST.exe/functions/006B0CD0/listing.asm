FUN_006b0cd0:
006B0CD0  55                        PUSH EBP
006B0CD1  8B EC                     MOV EBP,ESP
006B0CD3  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006B0CD6  56                        PUSH ESI
006B0CD7  57                        PUSH EDI
006B0CD8  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006B0CDB  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
006B0CDE  3B C8                     CMP ECX,EAX
006B0CE0  73 68                     JNC 0x006b0d4a
006B0CE2  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006B0CE5  3B F0                     CMP ESI,EAX
006B0CE7  73 61                     JNC 0x006b0d4a
006B0CE9  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
006B0CEC  53                        PUSH EBX
006B0CED  83 FA 04                  CMP EDX,0x4
006B0CF0  75 1B                     JNZ 0x006b0d0d
006B0CF2  8B 47 1C                  MOV EAX,dword ptr [EDI + 0x1c]
006B0CF5  8B 1C B0                  MOV EBX,dword ptr [EAX + ESI*0x4]
006B0CF8  8B 14 88                  MOV EDX,dword ptr [EAX + ECX*0x4]
006B0CFB  89 1C 88                  MOV dword ptr [EAX + ECX*0x4],EBX
006B0CFE  8B 47 1C                  MOV EAX,dword ptr [EDI + 0x1c]
006B0D01  5B                        POP EBX
006B0D02  5F                        POP EDI
006B0D03  89 14 B0                  MOV dword ptr [EAX + ESI*0x4],EDX
006B0D06  33 C0                     XOR EAX,EAX
006B0D08  5E                        POP ESI
006B0D09  5D                        POP EBP
006B0D0A  C2 0C 00                  RET 0xc
LAB_006b0d0d:
006B0D0D  8B C2                     MOV EAX,EDX
006B0D0F  0F AF C1                  IMUL EAX,ECX
006B0D12  8B CA                     MOV ECX,EDX
006B0D14  0F AF CE                  IMUL ECX,ESI
006B0D17  8B F2                     MOV ESI,EDX
006B0D19  4A                        DEC EDX
006B0D1A  85 F6                     TEST ESI,ESI
006B0D1C  74 23                     JZ 0x006b0d41
006B0D1E  42                        INC EDX
006B0D1F  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
LAB_006b0d22:
006B0D22  8B 77 1C                  MOV ESI,dword ptr [EDI + 0x1c]
006B0D25  40                        INC EAX
006B0D26  8A 1C 0E                  MOV BL,byte ptr [ESI + ECX*0x1]
006B0D29  8A 54 06 FF               MOV DL,byte ptr [ESI + EAX*0x1 + -0x1]
006B0D2D  88 5C 06 FF               MOV byte ptr [ESI + EAX*0x1 + -0x1],BL
006B0D31  8B 77 1C                  MOV ESI,dword ptr [EDI + 0x1c]
006B0D34  88 14 0E                  MOV byte ptr [ESI + ECX*0x1],DL
006B0D37  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B0D3A  41                        INC ECX
006B0D3B  4A                        DEC EDX
006B0D3C  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
006B0D3F  75 E1                     JNZ 0x006b0d22
LAB_006b0d41:
006B0D41  5B                        POP EBX
006B0D42  5F                        POP EDI
006B0D43  33 C0                     XOR EAX,EAX
006B0D45  5E                        POP ESI
006B0D46  5D                        POP EBP
006B0D47  C2 0C 00                  RET 0xc
LAB_006b0d4a:
006B0D4A  5F                        POP EDI
006B0D4B  B8 FC FF FF FF            MOV EAX,0xfffffffc
006B0D50  5E                        POP ESI
006B0D51  5D                        POP EBP
006B0D52  C2 0C 00                  RET 0xc
