FUN_0058bb90:
0058BB90  55                        PUSH EBP
0058BB91  8B EC                     MOV EBP,ESP
0058BB93  83 EC 5C                  SUB ESP,0x5c
0058BB96  53                        PUSH EBX
0058BB97  56                        PUSH ESI
0058BB98  8B F1                     MOV ESI,ECX
0058BB9A  57                        PUSH EDI
0058BB9B  B9 16 00 00 00            MOV ECX,0x16
0058BBA0  33 C0                     XOR EAX,EAX
0058BBA2  8D 7D A4                  LEA EDI,[EBP + -0x5c]
0058BBA5  8B 96 79 02 00 00         MOV EDX,dword ptr [ESI + 0x279]
0058BBAB  F3 AB                     STOSD.REP ES:EDI
0058BBAD  66 8B 8E 99 02 00 00      MOV CX,word ptr [ESI + 0x299]
0058BBB4  88 45 D0                  MOV byte ptr [EBP + -0x30],AL
0058BBB7  8B 86 95 02 00 00         MOV EAX,dword ptr [ESI + 0x295]
0058BBBD  66 8B 7E 43               MOV DI,word ptr [ESI + 0x43]
0058BBC1  89 45 D1                  MOV dword ptr [EBP + -0x2f],EAX
0058BBC4  8B 86 59 02 00 00         MOV EAX,dword ptr [ESI + 0x259]
0058BBCA  66 89 4D D5               MOV word ptr [EBP + -0x2b],CX
0058BBCE  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
0058BBD2  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0058BBD5  89 55 A8                  MOV dword ptr [EBP + -0x58],EDX
0058BBD8  C1 F8 08                  SAR EAX,0x8
0058BBDB  66 03 46 41               ADD AX,word ptr [ESI + 0x41]
0058BBDF  8D 91 6A FF FF FF         LEA EDX,[ECX + 0xffffff6a]
0058BBE5  8D 89 38 FF FF FF         LEA ECX,[ECX + 0xffffff38]
0058BBEB  C7 45 CC A5 00 00 00      MOV dword ptr [EBP + -0x34],0xa5
0058BBF2  66 89 4D C8               MOV word ptr [EBP + -0x38],CX
0058BBF6  66 89 45 BE               MOV word ptr [EBP + -0x42],AX
0058BBFA  66 89 45 C4               MOV word ptr [EBP + -0x3c],AX
0058BBFE  C7 45 A4 28 00 00 00      MOV dword ptr [EBP + -0x5c],0x28
0058BC05  0F BF C8                  MOVSX ECX,AX
0058BC08  C7 45 B0 01 00 00 00      MOV dword ptr [EBP + -0x50],0x1
0058BC0F  66 C7 45 CA 00 00         MOV word ptr [EBP + -0x36],0x0
0058BC15  66 89 55 C2               MOV word ptr [EBP + -0x3e],DX
0058BC19  66 89 7D C0               MOV word ptr [EBP + -0x40],DI
0058BC1D  66 89 7D C6               MOV word ptr [EBP + -0x3a],DI
0058BC21  B8 79 19 8C 02            MOV EAX,0x28c1979
0058BC26  78 13                     JS 0x0058bc3b
0058BC28  F7 E9                     IMUL ECX
0058BC2A  D1 FA                     SAR EDX,0x1
0058BC2C  8B C2                     MOV EAX,EDX
0058BC2E  C1 E8 1F                  SHR EAX,0x1f
0058BC31  03 D0                     ADD EDX,EAX
0058BC33  0F BF CA                  MOVSX ECX,DX
0058BC36  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0058BC39  EB 12                     JMP 0x0058bc4d
LAB_0058bc3b:
0058BC3B  F7 E9                     IMUL ECX
0058BC3D  D1 FA                     SAR EDX,0x1
0058BC3F  8B C2                     MOV EAX,EDX
0058BC41  C1 E8 1F                  SHR EAX,0x1f
0058BC44  03 D0                     ADD EDX,EAX
0058BC46  0F BF C2                  MOVSX EAX,DX
0058BC49  48                        DEC EAX
0058BC4A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0058bc4d:
0058BC4D  66 85 FF                  TEST DI,DI
0058BC50  0F BF CF                  MOVSX ECX,DI
0058BC53  B8 79 19 8C 02            MOV EAX,0x28c1979
0058BC58  7C 10                     JL 0x0058bc6a
0058BC5A  F7 E9                     IMUL ECX
0058BC5C  D1 FA                     SAR EDX,0x1
0058BC5E  8B CA                     MOV ECX,EDX
0058BC60  C1 E9 1F                  SHR ECX,0x1f
0058BC63  03 D1                     ADD EDX,ECX
0058BC65  0F BF DA                  MOVSX EBX,DX
0058BC68  EB 0F                     JMP 0x0058bc79
LAB_0058bc6a:
0058BC6A  F7 E9                     IMUL ECX
0058BC6C  D1 FA                     SAR EDX,0x1
0058BC6E  8B C2                     MOV EAX,EDX
0058BC70  C1 E8 1F                  SHR EAX,0x1f
0058BC73  03 D0                     ADD EDX,EAX
0058BC75  0F BF DA                  MOVSX EBX,DX
0058BC78  4B                        DEC EBX
LAB_0058bc79:
0058BC79  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0058BC7C  BF 04 00 00 00            MOV EDI,0x4
0058BC81  57                        PUSH EDI
0058BC82  53                        PUSH EBX
0058BC83  51                        PUSH ECX
0058BC84  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0058BC8A  E8 AC 90 E7 FF            CALL 0x00404d3b
0058BC8F  85 C0                     TEST EAX,EAX
0058BC91  74 1E                     JZ 0x0058bcb1
LAB_0058bc93:
0058BC93  85 FF                     TEST EDI,EDI
0058BC95  7E 18                     JLE 0x0058bcaf
0058BC97  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0058BC9A  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0058BCA0  4F                        DEC EDI
0058BCA1  57                        PUSH EDI
0058BCA2  53                        PUSH EBX
0058BCA3  52                        PUSH EDX
0058BCA4  E8 92 90 E7 FF            CALL 0x00404d3b
0058BCA9  85 C0                     TEST EAX,EAX
0058BCAB  75 E6                     JNZ 0x0058bc93
0058BCAD  85 FF                     TEST EDI,EDI
LAB_0058bcaf:
0058BCAF  7C 13                     JL 0x0058bcc4
LAB_0058bcb1:
0058BCB1  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0058BCB6  F7 EF                     IMUL EDI
0058BCB8  C1 FA 06                  SAR EDX,0x6
0058BCBB  8B C2                     MOV EAX,EDX
0058BCBD  C1 E8 1F                  SHR EAX,0x1f
0058BCC0  03 D0                     ADD EDX,EAX
0058BCC2  EB 13                     JMP 0x0058bcd7
LAB_0058bcc4:
0058BCC4  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0058BCC9  F7 EF                     IMUL EDI
0058BCCB  C1 FA 06                  SAR EDX,0x6
0058BCCE  8B CA                     MOV ECX,EDX
0058BCD0  C1 E9 1F                  SHR ECX,0x1f
0058BCD3  8D 54 0A FF               LEA EDX,[EDX + ECX*0x1 + -0x1]
LAB_0058bcd7:
0058BCD7  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
0058BCDD  66 89 55 C8               MOV word ptr [EBP + -0x38],DX
0058BCE1  85 C9                     TEST ECX,ECX
0058BCE3  74 13                     JZ 0x0058bcf8
0058BCE5  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0058BCE8  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0058BCEB  6A 19                     PUSH 0x19
0058BCED  6A 02                     PUSH 0x2
0058BCEF  50                        PUSH EAX
0058BCF0  57                        PUSH EDI
0058BCF1  53                        PUSH EBX
0058BCF2  52                        PUSH EDX
0058BCF3  E8 DA 62 E7 FF            CALL 0x00401fd2
LAB_0058bcf8:
0058BCF8  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0058BCFE  8D 45 A4                  LEA EAX,[EBP + -0x5c]
0058BD01  6A 00                     PUSH 0x0
0058BD03  50                        PUSH EAX
0058BD04  6A 00                     PUSH 0x0
0058BD06  6A 00                     PUSH 0x0
0058BD08  6A 28                     PUSH 0x28
0058BD0A  E8 B3 5E E7 FF            CALL 0x00401bc2
0058BD0F  5F                        POP EDI
0058BD10  5E                        POP ESI
0058BD11  5B                        POP EBX
0058BD12  8B E5                     MOV ESP,EBP
0058BD14  5D                        POP EBP
0058BD15  C3                        RET
