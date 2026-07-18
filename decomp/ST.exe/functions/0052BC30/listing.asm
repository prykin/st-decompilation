FUN_0052bc30:
0052BC30  55                        PUSH EBP
0052BC31  8B EC                     MOV EBP,ESP
0052BC33  A0 4E 87 80 00            MOV AL,[0x0080874e]
0052BC38  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0052BC3B  56                        PUSH ESI
0052BC3C  8B F1                     MOV ESI,ECX
0052BC3E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0052BC41  3C 03                     CMP AL,0x3
0052BC43  75 20                     JNZ 0x0052bc65
0052BC45  83 F9 FF                  CMP ECX,-0x1
0052BC48  74 45                     JZ 0x0052bc8f
0052BC4A  81 F9 3F 42 0F 00         CMP ECX,0xf423f
0052BC50  8B C1                     MOV EAX,ECX
0052BC52  72 05                     JC 0x0052bc59
0052BC54  B8 3F 42 0F 00            MOV EAX,0xf423f
LAB_0052bc59:
0052BC59  85 D2                     TEST EDX,EDX
0052BC5B  89 86 8A 00 00 00         MOV dword ptr [ESI + 0x8a],EAX
0052BC61  74 27                     JZ 0x0052bc8a
0052BC63  EB 1E                     JMP 0x0052bc83
LAB_0052bc65:
0052BC65  83 F9 FF                  CMP ECX,-0x1
0052BC68  74 25                     JZ 0x0052bc8f
0052BC6A  81 F9 9F 86 01 00         CMP ECX,0x1869f
0052BC70  8B C1                     MOV EAX,ECX
0052BC72  72 05                     JC 0x0052bc79
0052BC74  B8 9F 86 01 00            MOV EAX,0x1869f
LAB_0052bc79:
0052BC79  85 D2                     TEST EDX,EDX
0052BC7B  89 86 8A 00 00 00         MOV dword ptr [ESI + 0x8a],EAX
0052BC81  74 07                     JZ 0x0052bc8a
LAB_0052bc83:
0052BC83  40                        INC EAX
0052BC84  89 86 86 00 00 00         MOV dword ptr [ESI + 0x86],EAX
LAB_0052bc8a:
0052BC8A  A0 4E 87 80 00            MOV AL,[0x0080874e]
LAB_0052bc8f:
0052BC8F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0052BC92  83 F9 FF                  CMP ECX,-0x1
0052BC95  74 25                     JZ 0x0052bcbc
0052BC97  81 F9 3F 42 0F 00         CMP ECX,0xf423f
0052BC9D  8B C1                     MOV EAX,ECX
0052BC9F  72 05                     JC 0x0052bca6
0052BCA1  B8 3F 42 0F 00            MOV EAX,0xf423f
LAB_0052bca6:
0052BCA6  85 D2                     TEST EDX,EDX
0052BCA8  89 86 92 00 00 00         MOV dword ptr [ESI + 0x92],EAX
0052BCAE  74 07                     JZ 0x0052bcb7
0052BCB0  40                        INC EAX
0052BCB1  89 86 8E 00 00 00         MOV dword ptr [ESI + 0x8e],EAX
LAB_0052bcb7:
0052BCB7  A0 4E 87 80 00            MOV AL,[0x0080874e]
LAB_0052bcbc:
0052BCBC  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0052BCBF  83 F9 FF                  CMP ECX,-0x1
0052BCC2  74 25                     JZ 0x0052bce9
0052BCC4  81 F9 3F 42 0F 00         CMP ECX,0xf423f
0052BCCA  8B C1                     MOV EAX,ECX
0052BCCC  72 05                     JC 0x0052bcd3
0052BCCE  B8 3F 42 0F 00            MOV EAX,0xf423f
LAB_0052bcd3:
0052BCD3  85 D2                     TEST EDX,EDX
0052BCD5  89 86 9A 00 00 00         MOV dword ptr [ESI + 0x9a],EAX
0052BCDB  74 07                     JZ 0x0052bce4
0052BCDD  40                        INC EAX
0052BCDE  89 86 96 00 00 00         MOV dword ptr [ESI + 0x96],EAX
LAB_0052bce4:
0052BCE4  A0 4E 87 80 00            MOV AL,[0x0080874e]
LAB_0052bce9:
0052BCE9  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0052BCEC  80 FA FF                  CMP DL,0xff
0052BCEF  74 37                     JZ 0x0052bd28
0052BCF1  8A C8                     MOV CL,AL
0052BCF3  81 E2 FF 00 00 00         AND EDX,0xff
0052BCF9  80 E9 03                  SUB CL,0x3
0052BCFC  F6 D9                     NEG CL
0052BCFE  1B C9                     SBB ECX,ECX
0052BD00  83 E1 F9                  AND ECX,0xfffffff9
0052BD03  83 C1 15                  ADD ECX,0x15
0052BD06  3B D1                     CMP EDX,ECX
0052BD08  7D 04                     JGE 0x0052bd0e
0052BD0A  8B C2                     MOV EAX,EDX
0052BD0C  EB 0B                     JMP 0x0052bd19
LAB_0052bd0e:
0052BD0E  2C 03                     SUB AL,0x3
0052BD10  F6 D8                     NEG AL
0052BD12  1B C0                     SBB EAX,EAX
0052BD14  24 F9                     AND AL,0xf9
0052BD16  83 C0 14                  ADD EAX,0x14
LAB_0052bd19:
0052BD19  8A 55 18                  MOV DL,byte ptr [EBP + 0x18]
0052BD1C  88 86 A3 00 00 00         MOV byte ptr [ESI + 0xa3],AL
0052BD22  88 96 A5 00 00 00         MOV byte ptr [ESI + 0xa5],DL
LAB_0052bd28:
0052BD28  8B 0D 44 2A 80 00         MOV ECX,dword ptr [0x00802a44]
0052BD2E  5E                        POP ESI
0052BD2F  85 C9                     TEST ECX,ECX
0052BD31  74 0F                     JZ 0x0052bd42
0052BD33  66 83 B9 72 01 00 00 01   CMP word ptr [ECX + 0x172],0x1
0052BD3B  75 05                     JNZ 0x0052bd42
0052BD3D  8B 01                     MOV EAX,dword ptr [ECX]
0052BD3F  FF 50 20                  CALL dword ptr [EAX + 0x20]
LAB_0052bd42:
0052BD42  5D                        POP EBP
0052BD43  C2 18 00                  RET 0x18
