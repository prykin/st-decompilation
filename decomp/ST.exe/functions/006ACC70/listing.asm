FUN_006acc70:
006ACC70  55                        PUSH EBP
006ACC71  8B EC                     MOV EBP,ESP
006ACC73  57                        PUSH EDI
006ACC74  8B F9                     MOV EDI,ECX
006ACC76  8B C2                     MOV EAX,EDX
006ACC78  3B 47 0C                  CMP EAX,dword ptr [EDI + 0xc]
006ACC7B  73 3A                     JNC 0x006accb7
006ACC7D  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
006ACC80  83 F9 04                  CMP ECX,0x4
006ACC83  75 10                     JNZ 0x006acc95
006ACC85  8B 4F 1C                  MOV ECX,dword ptr [EDI + 0x1c]
006ACC88  5F                        POP EDI
006ACC89  8B 14 81                  MOV EDX,dword ptr [ECX + EAX*0x4]
006ACC8C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006ACC8F  89 11                     MOV dword ptr [ECX],EDX
006ACC91  5D                        POP EBP
006ACC92  C2 04 00                  RET 0x4
LAB_006accb7:
006ACCB7  B8 FC FF FF FF            MOV EAX,0xfffffffc
006ACCBC  5F                        POP EDI
006ACCBD  5D                        POP EBP
006ACCBE  C2 04 00                  RET 0x4
