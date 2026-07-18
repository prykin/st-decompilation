FUN_0043f7b0:
0043F7B0  55                        PUSH EBP
0043F7B1  8B EC                     MOV EBP,ESP
0043F7B3  83 EC 18                  SUB ESP,0x18
0043F7B6  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0043F7B9  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0043F7BC  53                        PUSH EBX
0043F7BD  8B D8                     MOV EBX,EAX
0043F7BF  03 C1                     ADD EAX,ECX
0043F7C1  2B D9                     SUB EBX,ECX
0043F7C3  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
0043F7C6  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0043F7C9  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0043F7CC  56                        PUSH ESI
0043F7CD  8B D0                     MOV EDX,EAX
0043F7CF  03 C1                     ADD EAX,ECX
0043F7D1  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
0043F7D4  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0043F7D7  2B D1                     SUB EDX,ECX
0043F7D9  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
0043F7DC  8B F0                     MOV ESI,EAX
0043F7DE  57                        PUSH EDI
0043F7DF  2B F1                     SUB ESI,ECX
0043F7E1  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0043F7E4  85 DB                     TEST EBX,EBX
0043F7E6  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
0043F7E9  8D 3C 08                  LEA EDI,[EAX + ECX*0x1]
0043F7EC  7D 0A                     JGE 0x0043f7f8
0043F7EE  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0043F7F5  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_0043f7f8:
0043F7F8  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
0043F7FF  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0043F802  48                        DEC EAX
0043F803  3B C8                     CMP ECX,EAX
0043F805  7E 03                     JLE 0x0043f80a
0043F807  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0043f80a:
0043F80A  85 D2                     TEST EDX,EDX
0043F80C  7D 07                     JGE 0x0043f815
0043F80E  C7 45 14 00 00 00 00      MOV dword ptr [EBP + 0x14],0x0
LAB_0043f815:
0043F815  0F BF 05 42 B2 7F 00      MOVSX EAX,word ptr [0x007fb242]
0043F81C  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
0043F81F  48                        DEC EAX
0043F820  3B C8                     CMP ECX,EAX
0043F822  7E 03                     JLE 0x0043f827
0043F824  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
LAB_0043f827:
0043F827  85 F6                     TEST ESI,ESI
0043F829  7D 02                     JGE 0x0043f82d
0043F82B  33 F6                     XOR ESI,ESI
LAB_0043f82d:
0043F82D  0F BF 05 44 B2 7F 00      MOVSX EAX,word ptr [0x007fb244]
0043F834  48                        DEC EAX
0043F835  3B F8                     CMP EDI,EAX
0043F837  7E 02                     JLE 0x0043f83b
0043F839  8B F8                     MOV EDI,EAX
LAB_0043f83b:
0043F83B  6A 0A                     PUSH 0xa
0043F83D  6A 04                     PUSH 0x4
0043F83F  6A 0F                     PUSH 0xf
0043F841  6A 00                     PUSH 0x0
0043F843  E8 48 EA 26 00            CALL 0x006ae290
0043F848  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
0043F84F  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
0043F856  0F AF 55 14               IMUL EDX,dword ptr [EBP + 0x14]
0043F85A  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
0043F85D  8D 46 FF                  LEA EAX,[ESI + -0x1]
0043F860  0F AF C1                  IMUL EAX,ECX
0043F863  03 D8                     ADD EBX,EAX
0043F865  03 D3                     ADD EDX,EBX
0043F867  3B F7                     CMP ESI,EDI
0043F869  0F 8F D4 02 00 00         JG 0x0043fb43
0043F86F  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0043F872  2B FE                     SUB EDI,ESI
0043F874  47                        INC EDI
0043F875  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
LAB_0043f878:
0043F878  0F BF 05 46 B2 7F 00      MOVSX EAX,word ptr [0x007fb246]
0043F87F  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
0043F886  03 D0                     ADD EDX,EAX
0043F888  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0043F88B  8B F2                     MOV ESI,EDX
0043F88D  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0043F890  2B F1                     SUB ESI,ECX
0043F892  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0043F895  3B C8                     CMP ECX,EAX
0043F897  0F 8F 99 02 00 00         JG 0x0043fb36
0043F89D  8B F8                     MOV EDI,EAX
0043F89F  2B F9                     SUB EDI,ECX
0043F8A1  47                        INC EDI
0043F8A2  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
LAB_0043f8a5:
0043F8A5  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
0043F8AC  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0043F8AF  03 F0                     ADD ESI,EAX
0043F8B1  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0043F8B4  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
0043F8B7  3B C8                     CMP ECX,EAX
0043F8B9  0F 8F 6D 02 00 00         JG 0x0043fb2c
0043F8BF  2B C1                     SUB EAX,ECX
0043F8C1  8D 3C F5 F8 FF FF FF      LEA EDI,[ESI*0x8 + 0xfffffff8]
0043F8C8  40                        INC EAX
0043F8C9  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_0043f8cc:
0043F8CC  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0043F8D2  83 C7 08                  ADD EDI,0x8
0043F8D5  8B 04 0F                  MOV EAX,dword ptr [EDI + ECX*0x1]
0043F8D8  85 C0                     TEST EAX,EAX
0043F8DA  0F 84 1A 01 00 00         JZ 0x0043f9fa
0043F8E0  8B F0                     MOV ESI,EAX
0043F8E2  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
0043F8E5  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
0043F8E8  83 F8 14                  CMP EAX,0x14
0043F8EB  74 12                     JZ 0x0043f8ff
0043F8ED  3D E8 03 00 00            CMP EAX,0x3e8
0043F8F2  74 0B                     JZ 0x0043f8ff
0043F8F4  3D E9 03 00 00            CMP EAX,0x3e9
0043F8F9  0F 85 FB 00 00 00         JNZ 0x0043f9fa
LAB_0043f8ff:
0043F8FF  39 75 0C                  CMP dword ptr [EBP + 0xc],ESI
0043F902  0F 84 F2 00 00 00         JZ 0x0043f9fa
0043F908  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
0043F90B  85 C0                     TEST EAX,EAX
0043F90D  0F 85 CB 00 00 00         JNZ 0x0043f9de
0043F913  8A 0D 8F 8A 80 00         MOV CL,byte ptr [0x00808a8f]
0043F919  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
0043F91C  84 C9                     TEST CL,CL
0043F91E  88 45 18                  MOV byte ptr [EBP + 0x18],AL
0043F921  74 2C                     JZ 0x0043f94f
0043F923  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0043F926  33 C9                     XOR ECX,ECX
0043F928  25 FF 00 00 00            AND EAX,0xff
0043F92D  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
0043F930  8B C3                     MOV EAX,EBX
0043F932  25 FF 00 00 00            AND EAX,0xff
0043F937  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0043F93A  8A 84 C0 EA 87 80 00      MOV AL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
0043F941  3A 84 D2 EA 87 80 00      CMP AL,byte ptr [EDX + EDX*0x8 + 0x8087ea]
0043F948  0F 95 C1                  SETNZ CL
0043F94B  8B C1                     MOV EAX,ECX
0043F94D  EB 79                     JMP 0x0043f9c8
LAB_0043f94f:
0043F94F  3A C3                     CMP AL,BL
0043F951  74 6A                     JZ 0x0043f9bd
0043F953  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0043F956  8B D3                     MOV EDX,EBX
0043F958  25 FF 00 00 00            AND EAX,0xff
0043F95D  81 E2 FF 00 00 00         AND EDX,0xff
0043F963  8A 8C C2 4F 8A 80 00      MOV CL,byte ptr [EDX + EAX*0x8 + 0x808a4f]
0043F96A  84 C9                     TEST CL,CL
0043F96C  75 10                     JNZ 0x0043f97e
0043F96E  38 8C D0 4F 8A 80 00      CMP byte ptr [EAX + EDX*0x8 + 0x808a4f],CL
0043F975  75 07                     JNZ 0x0043f97e
0043F977  B8 FE FF FF FF            MOV EAX,0xfffffffe
0043F97C  EB 41                     JMP 0x0043f9bf
LAB_0043f97e:
0043F97E  80 F9 01                  CMP CL,0x1
0043F981  75 0F                     JNZ 0x0043f992
0043F983  80 BC D0 4F 8A 80 00 00   CMP byte ptr [EAX + EDX*0x8 + 0x808a4f],0x0
0043F98B  75 05                     JNZ 0x0043f992
0043F98D  83 C8 FF                  OR EAX,0xffffffff
0043F990  EB 2D                     JMP 0x0043f9bf
LAB_0043f992:
0043F992  84 C9                     TEST CL,CL
0043F994  75 11                     JNZ 0x0043f9a7
0043F996  80 BC D0 4F 8A 80 00 01   CMP byte ptr [EAX + EDX*0x8 + 0x808a4f],0x1
0043F99E  75 07                     JNZ 0x0043f9a7
0043F9A0  B8 01 00 00 00            MOV EAX,0x1
0043F9A5  EB 18                     JMP 0x0043f9bf
LAB_0043f9a7:
0043F9A7  80 F9 01                  CMP CL,0x1
0043F9AA  75 11                     JNZ 0x0043f9bd
0043F9AC  80 BC D0 4F 8A 80 00 01   CMP byte ptr [EAX + EDX*0x8 + 0x808a4f],0x1
0043F9B4  75 07                     JNZ 0x0043f9bd
0043F9B6  B8 02 00 00 00            MOV EAX,0x2
0043F9BB  EB 02                     JMP 0x0043f9bf
LAB_0043f9bd:
0043F9BD  33 C0                     XOR EAX,EAX
LAB_0043f9bf:
0043F9BF  33 D2                     XOR EDX,EDX
0043F9C1  85 C0                     TEST EAX,EAX
0043F9C3  0F 9C C2                  SETL DL
0043F9C6  8B C2                     MOV EAX,EDX
LAB_0043f9c8:
0043F9C8  83 F8 01                  CMP EAX,0x1
0043F9CB  75 2D                     JNZ 0x0043f9fa
0043F9CD  8B 06                     MOV EAX,dword ptr [ESI]
0043F9CF  8B CE                     MOV ECX,ESI
0043F9D1  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
0043F9D7  83 F8 01                  CMP EAX,0x1
0043F9DA  75 1E                     JNZ 0x0043f9fa
0043F9DC  EB 0F                     JMP 0x0043f9ed
LAB_0043f9de:
0043F9DE  8B 06                     MOV EAX,dword ptr [ESI]
0043F9E0  8B CE                     MOV ECX,ESI
0043F9E2  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
0043F9E8  83 F8 01                  CMP EAX,0x1
0043F9EB  75 0D                     JNZ 0x0043f9fa
LAB_0043f9ed:
0043F9ED  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0043F9F0  8D 4D 1C                  LEA ECX,[EBP + 0x1c]
0043F9F3  51                        PUSH ECX
0043F9F4  52                        PUSH EDX
0043F9F5  E8 C6 E7 26 00            CALL 0x006ae1c0
LAB_0043f9fa:
0043F9FA  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
0043F9FF  8B 44 07 04               MOV EAX,dword ptr [EDI + EAX*0x1 + 0x4]
0043FA03  85 C0                     TEST EAX,EAX
0043FA05  0F 84 0B 01 00 00         JZ 0x0043fb16
0043FA0B  8B F0                     MOV ESI,EAX
0043FA0D  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
0043FA10  81 7E 20 AE 01 00 00      CMP dword ptr [ESI + 0x20],0x1ae
0043FA17  0F 85 F9 00 00 00         JNZ 0x0043fb16
0043FA1D  39 75 0C                  CMP dword ptr [EBP + 0xc],ESI
0043FA20  0F 84 F0 00 00 00         JZ 0x0043fb16
0043FA26  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
0043FA29  85 C0                     TEST EAX,EAX
0043FA2B  0F 85 C9 00 00 00         JNZ 0x0043fafa
0043FA31  8A 0D 8F 8A 80 00         MOV CL,byte ptr [0x00808a8f]
0043FA37  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
0043FA3A  84 C9                     TEST CL,CL
0043FA3C  88 45 24                  MOV byte ptr [EBP + 0x24],AL
0043FA3F  74 2A                     JZ 0x0043fa6b
0043FA41  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
0043FA44  25 FF 00 00 00            AND EAX,0xff
0043FA49  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
0043FA4C  8B C3                     MOV EAX,EBX
0043FA4E  25 FF 00 00 00            AND EAX,0xff
0043FA53  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0043FA56  8A 8C C0 EA 87 80 00      MOV CL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
0043FA5D  33 C0                     XOR EAX,EAX
0043FA5F  3A 8C D2 EA 87 80 00      CMP CL,byte ptr [EDX + EDX*0x8 + 0x8087ea]
0043FA66  0F 95 C0                  SETNZ AL
0043FA69  EB 79                     JMP 0x0043fae4
LAB_0043fa6b:
0043FA6B  3A C3                     CMP AL,BL
0043FA6D  74 6A                     JZ 0x0043fad9
0043FA6F  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
0043FA72  8B D3                     MOV EDX,EBX
0043FA74  25 FF 00 00 00            AND EAX,0xff
0043FA79  81 E2 FF 00 00 00         AND EDX,0xff
0043FA7F  8A 8C C2 4F 8A 80 00      MOV CL,byte ptr [EDX + EAX*0x8 + 0x808a4f]
0043FA86  84 C9                     TEST CL,CL
0043FA88  75 10                     JNZ 0x0043fa9a
0043FA8A  38 8C D0 4F 8A 80 00      CMP byte ptr [EAX + EDX*0x8 + 0x808a4f],CL
0043FA91  75 07                     JNZ 0x0043fa9a
0043FA93  B8 FE FF FF FF            MOV EAX,0xfffffffe
0043FA98  EB 41                     JMP 0x0043fadb
LAB_0043fa9a:
0043FA9A  80 F9 01                  CMP CL,0x1
0043FA9D  75 0F                     JNZ 0x0043faae
0043FA9F  80 BC D0 4F 8A 80 00 00   CMP byte ptr [EAX + EDX*0x8 + 0x808a4f],0x0
0043FAA7  75 05                     JNZ 0x0043faae
0043FAA9  83 C8 FF                  OR EAX,0xffffffff
0043FAAC  EB 2D                     JMP 0x0043fadb
LAB_0043faae:
0043FAAE  84 C9                     TEST CL,CL
0043FAB0  75 11                     JNZ 0x0043fac3
0043FAB2  80 BC D0 4F 8A 80 00 01   CMP byte ptr [EAX + EDX*0x8 + 0x808a4f],0x1
0043FABA  75 07                     JNZ 0x0043fac3
0043FABC  B8 01 00 00 00            MOV EAX,0x1
0043FAC1  EB 18                     JMP 0x0043fadb
LAB_0043fac3:
0043FAC3  80 F9 01                  CMP CL,0x1
0043FAC6  75 11                     JNZ 0x0043fad9
0043FAC8  80 BC D0 4F 8A 80 00 01   CMP byte ptr [EAX + EDX*0x8 + 0x808a4f],0x1
0043FAD0  75 07                     JNZ 0x0043fad9
0043FAD2  B8 02 00 00 00            MOV EAX,0x2
0043FAD7  EB 02                     JMP 0x0043fadb
LAB_0043fad9:
0043FAD9  33 C0                     XOR EAX,EAX
LAB_0043fadb:
0043FADB  33 D2                     XOR EDX,EDX
0043FADD  85 C0                     TEST EAX,EAX
0043FADF  0F 9C C2                  SETL DL
0043FAE2  8B C2                     MOV EAX,EDX
LAB_0043fae4:
0043FAE4  83 F8 01                  CMP EAX,0x1
0043FAE7  75 2D                     JNZ 0x0043fb16
0043FAE9  8B 06                     MOV EAX,dword ptr [ESI]
0043FAEB  8B CE                     MOV ECX,ESI
0043FAED  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
0043FAF3  83 F8 01                  CMP EAX,0x1
0043FAF6  75 1E                     JNZ 0x0043fb16
0043FAF8  EB 0F                     JMP 0x0043fb09
LAB_0043fafa:
0043FAFA  8B 06                     MOV EAX,dword ptr [ESI]
0043FAFC  8B CE                     MOV ECX,ESI
0043FAFE  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
0043FB04  83 F8 01                  CMP EAX,0x1
0043FB07  75 0D                     JNZ 0x0043fb16
LAB_0043fb09:
0043FB09  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0043FB0C  8D 4D 1C                  LEA ECX,[EBP + 0x1c]
0043FB0F  51                        PUSH ECX
0043FB10  52                        PUSH EDX
0043FB11  E8 AA E6 26 00            CALL 0x006ae1c0
LAB_0043fb16:
0043FB16  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0043FB19  48                        DEC EAX
0043FB1A  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0043FB1D  0F 85 A9 FD FF FF         JNZ 0x0043f8cc
0043FB23  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0043FB26  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
0043FB29  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
LAB_0043fb2c:
0043FB2C  4F                        DEC EDI
0043FB2D  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0043FB30  0F 85 6F FD FF FF         JNZ 0x0043f8a5
LAB_0043fb36:
0043FB36  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0043FB39  48                        DEC EAX
0043FB3A  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0043FB3D  0F 85 35 FD FF FF         JNZ 0x0043f878
LAB_0043fb43:
0043FB43  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0043FB46  5F                        POP EDI
0043FB47  5E                        POP ESI
0043FB48  5B                        POP EBX
0043FB49  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0043FB4C  85 C9                     TEST ECX,ECX
0043FB4E  75 08                     JNZ 0x0043fb58
0043FB50  50                        PUSH EAX
0043FB51  E8 BA E5 26 00            CALL 0x006ae110
0043FB56  33 C0                     XOR EAX,EAX
LAB_0043fb58:
0043FB58  8B E5                     MOV ESP,EBP
0043FB5A  5D                        POP EBP
0043FB5B  C2 24 00                  RET 0x24
