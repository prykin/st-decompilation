FUN_0057ba30:
0057BA30  55                        PUSH EBP
0057BA31  8B EC                     MOV EBP,ESP
0057BA33  83 EC 20                  SUB ESP,0x20
0057BA36  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0057BA39  56                        PUSH ESI
0057BA3A  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0057BA3D  57                        PUSH EDI
0057BA3E  8D 48 FF                  LEA ECX,[EAX + -0x1]
0057BA41  B8 79 19 8C 02            MOV EAX,0x28c1979
0057BA46  F7 E9                     IMUL ECX
0057BA48  D1 FA                     SAR EDX,0x1
0057BA4A  8B CA                     MOV ECX,EDX
0057BA4C  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
0057BA53  C1 E9 1F                  SHR ECX,0x1f
0057BA56  85 F6                     TEST ESI,ESI
0057BA58  8D 7C 0A 01               LEA EDI,[EDX + ECX*0x1 + 0x1]
0057BA5C  75 08                     JNZ 0x0057ba66
0057BA5E  5F                        POP EDI
0057BA5F  33 C0                     XOR EAX,EAX
0057BA61  5E                        POP ESI
0057BA62  8B E5                     MOV ESP,EBP
0057BA64  5D                        POP EBP
0057BA65  C3                        RET
LAB_0057ba66:
0057BA66  8D 55 FE                  LEA EDX,[EBP + -0x2]
0057BA69  53                        PUSH EBX
0057BA6A  8D 45 0E                  LEA EAX,[EBP + 0xe]
0057BA6D  52                        PUSH EDX
0057BA6E  8D 4D 0A                  LEA ECX,[EBP + 0xa]
0057BA71  50                        PUSH EAX
0057BA72  51                        PUSH ECX
0057BA73  8B CE                     MOV ECX,ESI
0057BA75  E8 69 77 E8 FF            CALL 0x004031e3
0057BA7A  0F BF 4D 0E               MOVSX ECX,word ptr [EBP + 0xe]
0057BA7E  0F BF 55 0A               MOVSX EDX,word ptr [EBP + 0xa]
0057BA82  0F BF 5D FE               MOVSX EBX,word ptr [EBP + -0x2]
0057BA86  8B C1                     MOV EAX,ECX
0057BA88  8D 4C 39 01               LEA ECX,[ECX + EDI*0x1 + 0x1]
0057BA8C  2B C7                     SUB EAX,EDI
0057BA8E  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0057BA91  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0057BA94  8B C2                     MOV EAX,EDX
0057BA96  2B C7                     SUB EAX,EDI
0057BA98  8D 54 3A 01               LEA EDX,[EDX + EDI*0x1 + 0x1]
0057BA9C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0057BA9F  8B C3                     MOV EAX,EBX
0057BAA1  2B C7                     SUB EAX,EDI
0057BAA3  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0057BAA6  8D 7C 3B 01               LEA EDI,[EBX + EDI*0x1 + 0x1]
0057BAAA  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
0057BAAD  33 D2                     XOR EDX,EDX
0057BAAF  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
0057BAB2  3B DA                     CMP EBX,EDX
0057BAB4  7D 05                     JGE 0x0057babb
0057BAB6  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0057BAB9  8B DA                     MOV EBX,EDX
LAB_0057babb:
0057BABB  39 55 F8                  CMP dword ptr [EBP + -0x8],EDX
0057BABE  7D 03                     JGE 0x0057bac3
0057BAC0  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_0057bac3:
0057BAC3  3B C2                     CMP EAX,EDX
0057BAC5  7D 02                     JGE 0x0057bac9
0057BAC7  33 C0                     XOR EAX,EAX
LAB_0057bac9:
0057BAC9  0F BF 15 42 B2 7F 00      MOVSX EDX,word ptr [0x007fb242]
0057BAD0  3B CA                     CMP ECX,EDX
0057BAD2  7E 03                     JLE 0x0057bad7
0057BAD4  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
LAB_0057bad7:
0057BAD7  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
0057BADE  39 4D F4                  CMP dword ptr [EBP + -0xc],ECX
0057BAE1  7E 03                     JLE 0x0057bae6
0057BAE3  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_0057bae6:
0057BAE6  83 FF 04                  CMP EDI,0x4
0057BAE9  7E 0A                     JLE 0x0057baf5
0057BAEB  C7 45 E8 04 00 00 00      MOV dword ptr [EBP + -0x18],0x4
0057BAF2  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
LAB_0057baf5:
0057BAF5  8B C8                     MOV ECX,EAX
0057BAF7  3B C7                     CMP EAX,EDI
0057BAF9  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0057BAFC  0F 8D D2 00 00 00         JGE 0x0057bbd4
0057BB02  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
LAB_0057bb05:
0057BB05  3B 5D EC                  CMP EBX,dword ptr [EBP + -0x14]
0057BB08  0F 8D BA 00 00 00         JGE 0x0057bbc8
LAB_0057bb0e:
0057BB0E  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0057BB11  8B D7                     MOV EDX,EDI
0057BB13  3B D0                     CMP EDX,EAX
0057BB15  0F 8D 9B 00 00 00         JGE 0x0057bbb6
LAB_0057bb1b:
0057BB1B  66 85 FF                  TEST DI,DI
0057BB1E  0F 8C 86 00 00 00         JL 0x0057bbaa
0057BB24  66 A1 40 B2 7F 00         MOV AX,[0x007fb240]
0057BB2A  66 3B F8                  CMP DI,AX
0057BB2D  7D 7B                     JGE 0x0057bbaa
0057BB2F  66 85 DB                  TEST BX,BX
0057BB32  7C 76                     JL 0x0057bbaa
0057BB34  66 3B 1D 42 B2 7F 00      CMP BX,word ptr [0x007fb242]
0057BB3B  7D 6D                     JGE 0x0057bbaa
0057BB3D  66 85 C9                  TEST CX,CX
0057BB40  7C 68                     JL 0x0057bbaa
0057BB42  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0057BB49  7D 5F                     JGE 0x0057bbaa
0057BB4B  0F BF 15 46 B2 7F 00      MOVSX EDX,word ptr [0x007fb246]
0057BB52  0F BF C9                  MOVSX ECX,CX
0057BB55  0F AF CA                  IMUL ECX,EDX
0057BB58  0F BF D3                  MOVSX EDX,BX
0057BB5B  0F BF C0                  MOVSX EAX,AX
0057BB5E  0F AF D0                  IMUL EDX,EAX
0057BB61  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
0057BB66  03 CA                     ADD ECX,EDX
0057BB68  0F BF D7                  MOVSX EDX,DI
0057BB6B  03 CA                     ADD ECX,EDX
0057BB6D  8B 04 C8                  MOV EAX,dword ptr [EAX + ECX*0x8]
0057BB70  85 C0                     TEST EAX,EAX
0057BB72  74 33                     JZ 0x0057bba7
0057BB74  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0057BB77  8B 96 5E 02 00 00         MOV EDX,dword ptr [ESI + 0x25e]
0057BB7D  41                        INC ECX
0057BB7E  68 10 01 00 00            PUSH 0x110
0057BB83  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
0057BB86  66 8B 8E 62 02 00 00      MOV CX,word ptr [ESI + 0x262]
0057BB8D  68 AC 00 00 00            PUSH 0xac
0057BB92  51                        PUSH ECX
0057BB93  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
0057BB96  52                        PUSH EDX
0057BB97  50                        PUSH EAX
0057BB98  A1 20 66 7E 00            MOV EAX,[0x007e6620]
0057BB9D  50                        PUSH EAX
0057BB9E  51                        PUSH ECX
0057BB9F  E8 FB 87 E8 FF            CALL 0x0040439f
0057BBA4  83 C4 1C                  ADD ESP,0x1c
LAB_0057bba7:
0057BBA7  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
LAB_0057bbaa:
0057BBAA  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0057BBAD  47                        INC EDI
0057BBAE  3B F8                     CMP EDI,EAX
0057BBB0  0F 8C 65 FF FF FF         JL 0x0057bb1b
LAB_0057bbb6:
0057BBB6  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0057BBB9  43                        INC EBX
0057BBBA  3B DA                     CMP EBX,EDX
0057BBBC  0F 8C 4C FF FF FF         JL 0x0057bb0e
0057BBC2  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
0057BBC5  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
LAB_0057bbc8:
0057BBC8  41                        INC ECX
0057BBC9  3B CF                     CMP ECX,EDI
0057BBCB  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0057BBCE  0F 8C 31 FF FF FF         JL 0x0057bb05
LAB_0057bbd4:
0057BBD4  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0057BBD7  5B                        POP EBX
0057BBD8  5F                        POP EDI
0057BBD9  5E                        POP ESI
0057BBDA  8B E5                     MOV ESP,EBP
0057BBDC  5D                        POP EBP
0057BBDD  C3                        RET
