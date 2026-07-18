FUN_0040f840:
0040F840  55                        PUSH EBP
0040F841  8B EC                     MOV EBP,ESP
0040F843  83 EC 14                  SUB ESP,0x14
0040F846  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0040F849  33 D2                     XOR EDX,EDX
0040F84B  53                        PUSH EBX
0040F84C  56                        PUSH ESI
0040F84D  3B C2                     CMP EAX,EDX
0040F84F  57                        PUSH EDI
0040F850  0F 84 5C 01 00 00         JZ 0x0040f9b2
0040F856  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0040F859  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0040F85C  33 C9                     XOR ECX,ECX
0040F85E  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
0040F861  8A 0E                     MOV CL,byte ptr [ESI]
0040F863  8D 43 FF                  LEA EAX,[EBX + -0x1]
0040F866  85 C0                     TEST EAX,EAX
0040F868  C7 45 14 30 75 00 00      MOV dword ptr [EBP + 0x14],0x7530
0040F86F  BF 01 00 00 00            MOV EDI,0x1
0040F874  7C 15                     JL 0x0040f88b
LAB_0040f876:
0040F876  33 DB                     XOR EBX,EBX
0040F878  8A 1C 30                  MOV BL,byte ptr [EAX + ESI*0x1]
0040F87B  3B D9                     CMP EBX,ECX
0040F87D  75 09                     JNZ 0x0040f888
0040F87F  47                        INC EDI
0040F880  8B D0                     MOV EDX,EAX
0040F882  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0040F885  40                        INC EAX
0040F886  79 EE                     JNS 0x0040f876
LAB_0040f888:
0040F888  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
LAB_0040f88b:
0040F88B  B8 01 00 00 00            MOV EAX,0x1
0040F890  39 45 F0                  CMP dword ptr [EBP + -0x10],EAX
0040F893  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0040F896  7E 51                     JLE 0x0040f8e9
LAB_0040f898:
0040F898  33 DB                     XOR EBX,EBX
0040F89A  8A 1C 30                  MOV BL,byte ptr [EAX + ESI*0x1]
0040F89D  3B CB                     CMP ECX,EBX
0040F89F  75 03                     JNZ 0x0040f8a4
0040F8A1  47                        INC EDI
0040F8A2  EB 23                     JMP 0x0040f8c7
LAB_0040f8a4:
0040F8A4  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0040F8A7  3B C1                     CMP EAX,ECX
0040F8A9  7F 07                     JG 0x0040f8b2
0040F8AB  75 0E                     JNZ 0x0040f8bb
0040F8AD  39 7D FC                  CMP dword ptr [EBP + -0x4],EDI
0040F8B0  7D 09                     JGE 0x0040f8bb
LAB_0040f8b2:
0040F8B2  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
0040F8B5  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0040F8B8  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
LAB_0040f8bb:
0040F8BB  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0040F8BE  8B CB                     MOV ECX,EBX
0040F8C0  BF 01 00 00 00            MOV EDI,0x1
0040F8C5  8B D0                     MOV EDX,EAX
LAB_0040f8c7:
0040F8C7  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
0040F8CA  40                        INC EAX
0040F8CB  3B C3                     CMP EAX,EBX
0040F8CD  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0040F8D0  7C C6                     JL 0x0040f898
0040F8D2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0040F8D5  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
LAB_0040f8d8:
0040F8D8  39 4D 14                  CMP dword ptr [EBP + 0x14],ECX
0040F8DB  7F 06                     JG 0x0040f8e3
0040F8DD  75 0F                     JNZ 0x0040f8ee
0040F8DF  3B C7                     CMP EAX,EDI
0040F8E1  7D 0B                     JGE 0x0040f8ee
LAB_0040f8e3:
0040F8E3  8B C7                     MOV EAX,EDI
0040F8E5  8B CA                     MOV ECX,EDX
0040F8E7  EB 08                     JMP 0x0040f8f1
LAB_0040f8e9:
0040F8E9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0040F8EC  EB EA                     JMP 0x0040f8d8
LAB_0040f8ee:
0040F8EE  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
LAB_0040f8f1:
0040F8F1  99                        CDQ
0040F8F2  2B C2                     SUB EAX,EDX
0040F8F4  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0040F8F7  D1 F8                     SAR EAX,0x1
0040F8F9  03 C1                     ADD EAX,ECX
0040F8FB  99                        CDQ
0040F8FC  F7 FB                     IDIV EBX
0040F8FE  3B D7                     CMP EDX,EDI
0040F900  7D 3F                     JGE 0x0040f941
0040F902  8B CA                     MOV ECX,EDX
0040F904  2B CF                     SUB ECX,EDI
0040F906  03 CB                     ADD ECX,EBX
0040F908  3B CB                     CMP ECX,EBX
0040F90A  7D 0D                     JGE 0x0040f919
LAB_0040f90c:
0040F90C  8A 04 31                  MOV AL,byte ptr [ECX + ESI*0x1]
0040F90F  FE C0                     INC AL
0040F911  88 04 31                  MOV byte ptr [ECX + ESI*0x1],AL
0040F914  41                        INC ECX
0040F915  3B CB                     CMP ECX,EBX
0040F917  7C F3                     JL 0x0040f90c
LAB_0040f919:
0040F919  03 FA                     ADD EDI,EDX
0040F91B  33 C0                     XOR EAX,EAX
0040F91D  85 FF                     TEST EDI,EDI
0040F91F  7C 7E                     JL 0x0040f99f
LAB_0040f921:
0040F921  8A 0C 30                  MOV CL,byte ptr [EAX + ESI*0x1]
0040F924  FE C1                     INC CL
0040F926  88 0C 30                  MOV byte ptr [EAX + ESI*0x1],CL
0040F929  40                        INC EAX
0040F92A  3B C7                     CMP EAX,EDI
0040F92C  7E F3                     JLE 0x0040f921
0040F92E  8A 04 32                  MOV AL,byte ptr [EDX + ESI*0x1]
0040F931  5F                        POP EDI
0040F932  02 C3                     ADD AL,BL
0040F934  88 04 32                  MOV byte ptr [EDX + ESI*0x1],AL
0040F937  5E                        POP ESI
0040F938  8B C2                     MOV EAX,EDX
0040F93A  5B                        POP EBX
0040F93B  8B E5                     MOV ESP,EBP
0040F93D  5D                        POP EBP
0040F93E  C2 10 00                  RET 0x10
LAB_0040f941:
0040F941  8B C3                     MOV EAX,EBX
0040F943  8B CA                     MOV ECX,EDX
0040F945  2B C7                     SUB EAX,EDI
0040F947  3B D0                     CMP EDX,EAX
0040F949  7C 3F                     JL 0x0040f98a
0040F94B  2B CF                     SUB ECX,EDI
0040F94D  3B CB                     CMP ECX,EBX
0040F94F  7D 0D                     JGE 0x0040f95e
LAB_0040f951:
0040F951  8A 04 31                  MOV AL,byte ptr [ECX + ESI*0x1]
0040F954  FE C0                     INC AL
0040F956  88 04 31                  MOV byte ptr [ECX + ESI*0x1],AL
0040F959  41                        INC ECX
0040F95A  3B CB                     CMP ECX,EBX
0040F95C  7C F3                     JL 0x0040f951
LAB_0040f95e:
0040F95E  8B CA                     MOV ECX,EDX
0040F960  33 C0                     XOR EAX,EAX
0040F962  2B CB                     SUB ECX,EBX
0040F964  03 F9                     ADD EDI,ECX
0040F966  85 FF                     TEST EDI,EDI
0040F968  7C 35                     JL 0x0040f99f
LAB_0040f96a:
0040F96A  8A 0C 30                  MOV CL,byte ptr [EAX + ESI*0x1]
0040F96D  FE C1                     INC CL
0040F96F  88 0C 30                  MOV byte ptr [EAX + ESI*0x1],CL
0040F972  40                        INC EAX
0040F973  3B C7                     CMP EAX,EDI
0040F975  7E F3                     JLE 0x0040f96a
0040F977  8A 04 32                  MOV AL,byte ptr [EDX + ESI*0x1]
0040F97A  5F                        POP EDI
0040F97B  02 C3                     ADD AL,BL
0040F97D  88 04 32                  MOV byte ptr [EDX + ESI*0x1],AL
0040F980  5E                        POP ESI
0040F981  8B C2                     MOV EAX,EDX
0040F983  5B                        POP EBX
0040F984  8B E5                     MOV ESP,EBP
0040F986  5D                        POP EBP
0040F987  C2 10 00                  RET 0x10
LAB_0040f98a:
0040F98A  2B CF                     SUB ECX,EDI
0040F98C  03 FA                     ADD EDI,EDX
0040F98E  3B CF                     CMP ECX,EDI
0040F990  7F 0D                     JG 0x0040f99f
LAB_0040f992:
0040F992  8A 04 31                  MOV AL,byte ptr [ECX + ESI*0x1]
0040F995  FE C0                     INC AL
0040F997  88 04 31                  MOV byte ptr [ECX + ESI*0x1],AL
0040F99A  41                        INC ECX
0040F99B  3B CF                     CMP ECX,EDI
0040F99D  7E F3                     JLE 0x0040f992
LAB_0040f99f:
0040F99F  8A 04 32                  MOV AL,byte ptr [EDX + ESI*0x1]
0040F9A2  5F                        POP EDI
0040F9A3  02 C3                     ADD AL,BL
0040F9A5  88 04 32                  MOV byte ptr [EDX + ESI*0x1],AL
0040F9A8  5E                        POP ESI
0040F9A9  8B C2                     MOV EAX,EDX
0040F9AB  5B                        POP EBX
0040F9AC  8B E5                     MOV ESP,EBP
0040F9AE  5D                        POP EBP
0040F9AF  C2 10 00                  RET 0x10
LAB_0040f9b2:
0040F9B2  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0040F9B5  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0040F9B8  33 C9                     XOR ECX,ECX
0040F9BA  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0040F9BD  8A 0E                     MOV CL,byte ptr [ESI]
0040F9BF  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0040F9C2  BE 01 00 00 00            MOV ESI,0x1
0040F9C7  B8 30 75 00 00            MOV EAX,0x7530
0040F9CC  8B F9                     MOV EDI,ECX
0040F9CE  3B D6                     CMP EDX,ESI
0040F9D0  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
0040F9D3  8B CE                     MOV ECX,ESI
0040F9D5  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0040F9D8  0F 8E 95 00 00 00         JLE 0x0040fa73
LAB_0040f9de:
0040F9DE  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0040F9E1  33 C0                     XOR EAX,EAX
0040F9E3  8A 04 16                  MOV AL,byte ptr [ESI + EDX*0x1]
0040F9E6  3B F8                     CMP EDI,EAX
0040F9E8  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0040F9EB  75 03                     JNZ 0x0040f9f0
0040F9ED  41                        INC ECX
0040F9EE  EB 71                     JMP 0x0040fa61
LAB_0040f9f0:
0040F9F0  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0040F9F3  3B C7                     CMP EAX,EDI
0040F9F5  7F 49                     JG 0x0040fa40
0040F9F7  75 5D                     JNZ 0x0040fa56
0040F9F9  3B D9                     CMP EBX,ECX
0040F9FB  7C 43                     JL 0x0040fa40
0040F9FD  75 57                     JNZ 0x0040fa56
0040F9FF  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0040FA02  99                        CDQ
0040FA03  2B C2                     SUB EAX,EDX
0040FA05  8B F0                     MOV ESI,EAX
0040FA07  8B C3                     MOV EAX,EBX
0040FA09  99                        CDQ
0040FA0A  2B C2                     SUB EAX,EDX
0040FA0C  D1 FE                     SAR ESI,0x1
0040FA0E  8B D0                     MOV EDX,EAX
0040FA10  8B C6                     MOV EAX,ESI
0040FA12  D1 FA                     SAR EDX,0x1
0040FA14  2B C2                     SUB EAX,EDX
0040FA16  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0040FA19  2B C2                     SUB EAX,EDX
0040FA1B  99                        CDQ
0040FA1C  8B D8                     MOV EBX,EAX
0040FA1E  8B C1                     MOV EAX,ECX
0040FA20  33 DA                     XOR EBX,EDX
0040FA22  2B DA                     SUB EBX,EDX
0040FA24  99                        CDQ
0040FA25  2B C2                     SUB EAX,EDX
0040FA27  8B D0                     MOV EDX,EAX
0040FA29  8B C6                     MOV EAX,ESI
0040FA2B  D1 FA                     SAR EDX,0x1
0040FA2D  2B C2                     SUB EAX,EDX
0040FA2F  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0040FA32  2B C2                     SUB EAX,EDX
0040FA34  99                        CDQ
0040FA35  33 C2                     XOR EAX,EDX
0040FA37  2B C2                     SUB EAX,EDX
0040FA39  3B D8                     CMP EBX,EAX
0040FA3B  7E 13                     JLE 0x0040fa50
0040FA3D  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
LAB_0040fa40:
0040FA40  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0040FA43  8B D9                     MOV EBX,ECX
0040FA45  89 7D 14                  MOV dword ptr [EBP + 0x14],EDI
0040FA48  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0040FA4B  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0040FA4E  EB 06                     JMP 0x0040fa56
LAB_0040fa50:
0040FA50  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0040FA53  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
LAB_0040fa56:
0040FA56  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
0040FA59  B9 01 00 00 00            MOV ECX,0x1
0040FA5E  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
LAB_0040fa61:
0040FA61  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0040FA64  46                        INC ESI
0040FA65  3B F0                     CMP ESI,EAX
0040FA67  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0040FA6A  0F 8C 6E FF FF FF         JL 0x0040f9de
0040FA70  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
LAB_0040fa73:
0040FA73  3B C7                     CMP EAX,EDI
0040FA75  7F 46                     JG 0x0040fabd
0040FA77  75 4C                     JNZ 0x0040fac5
0040FA79  3B D9                     CMP EBX,ECX
0040FA7B  7C 40                     JL 0x0040fabd
0040FA7D  75 46                     JNZ 0x0040fac5
0040FA7F  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0040FA82  99                        CDQ
0040FA83  2B C2                     SUB EAX,EDX
0040FA85  8B F8                     MOV EDI,EAX
0040FA87  8B C3                     MOV EAX,EBX
0040FA89  99                        CDQ
0040FA8A  2B C2                     SUB EAX,EDX
0040FA8C  D1 FF                     SAR EDI,0x1
0040FA8E  8B D0                     MOV EDX,EAX
0040FA90  8B C7                     MOV EAX,EDI
0040FA92  D1 FA                     SAR EDX,0x1
0040FA94  2B C2                     SUB EAX,EDX
0040FA96  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0040FA99  2B C2                     SUB EAX,EDX
0040FA9B  99                        CDQ
0040FA9C  8B F0                     MOV ESI,EAX
0040FA9E  8B C1                     MOV EAX,ECX
0040FAA0  33 F2                     XOR ESI,EDX
0040FAA2  2B F2                     SUB ESI,EDX
0040FAA4  99                        CDQ
0040FAA5  2B C2                     SUB EAX,EDX
0040FAA7  8B D0                     MOV EDX,EAX
0040FAA9  8B C7                     MOV EAX,EDI
0040FAAB  D1 FA                     SAR EDX,0x1
0040FAAD  2B C2                     SUB EAX,EDX
0040FAAF  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0040FAB2  2B C2                     SUB EAX,EDX
0040FAB4  99                        CDQ
0040FAB5  33 C2                     XOR EAX,EDX
0040FAB7  2B C2                     SUB EAX,EDX
0040FAB9  3B F0                     CMP ESI,EAX
0040FABB  7E 08                     JLE 0x0040fac5
LAB_0040fabd:
0040FABD  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0040FAC0  8B D9                     MOV EBX,ECX
0040FAC2  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_0040fac5:
0040FAC5  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0040FAC8  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0040FACB  99                        CDQ
0040FACC  2B C2                     SUB EAX,EDX
0040FACE  D1 F8                     SAR EAX,0x1
0040FAD0  3B C8                     CMP ECX,EAX
0040FAD2  8B C3                     MOV EAX,EBX
0040FAD4  7C 03                     JL 0x0040fad9
0040FAD6  8D 43 FF                  LEA EAX,[EBX + -0x1]
LAB_0040fad9:
0040FAD9  99                        CDQ
0040FADA  2B C2                     SUB EAX,EDX
0040FADC  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0040FADF  D1 F8                     SAR EAX,0x1
0040FAE1  03 C1                     ADD EAX,ECX
0040FAE3  3B C2                     CMP EAX,EDX
0040FAE5  7D 2F                     JGE 0x0040fb16
0040FAE7  03 D0                     ADD EDX,EAX
0040FAE9  33 C9                     XOR ECX,ECX
0040FAEB  85 D2                     TEST EDX,EDX
0040FAED  7C 10                     JL 0x0040faff
LAB_0040faef:
0040FAEF  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0040FAF2  8A 1C 31                  MOV BL,byte ptr [ECX + ESI*0x1]
0040FAF5  FE C3                     INC BL
0040FAF7  88 1C 31                  MOV byte ptr [ECX + ESI*0x1],BL
0040FAFA  41                        INC ECX
0040FAFB  3B CA                     CMP ECX,EDX
0040FAFD  7E F0                     JLE 0x0040faef
LAB_0040faff:
0040FAFF  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
LAB_0040fb02:
0040FB02  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0040FB05  5F                        POP EDI
0040FB06  5E                        POP ESI
0040FB07  8A 14 08                  MOV DL,byte ptr [EAX + ECX*0x1]
0040FB0A  02 D3                     ADD DL,BL
0040FB0C  5B                        POP EBX
0040FB0D  88 14 08                  MOV byte ptr [EAX + ECX*0x1],DL
0040FB10  8B E5                     MOV ESP,EBP
0040FB12  5D                        POP EBP
0040FB13  C2 10 00                  RET 0x10
LAB_0040fb16:
0040FB16  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0040FB19  8B CB                     MOV ECX,EBX
0040FB1B  2B CA                     SUB ECX,EDX
0040FB1D  3B C1                     CMP EAX,ECX
0040FB1F  8B C8                     MOV ECX,EAX
0040FB21  7C 24                     JL 0x0040fb47
0040FB23  2B CA                     SUB ECX,EDX
0040FB25  3B CB                     CMP ECX,EBX
0040FB27  7D D9                     JGE 0x0040fb02
LAB_0040fb29:
0040FB29  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0040FB2C  FE 04 11                  INC byte ptr [ECX + EDX*0x1]
0040FB2F  41                        INC ECX
0040FB30  3B CB                     CMP ECX,EBX
0040FB32  7C F5                     JL 0x0040fb29
0040FB34  8B CA                     MOV ECX,EDX
0040FB36  5F                        POP EDI
0040FB37  5E                        POP ESI
0040FB38  8A 14 08                  MOV DL,byte ptr [EAX + ECX*0x1]
0040FB3B  02 D3                     ADD DL,BL
0040FB3D  5B                        POP EBX
0040FB3E  88 14 08                  MOV byte ptr [EAX + ECX*0x1],DL
0040FB41  8B E5                     MOV ESP,EBP
0040FB43  5D                        POP EBP
0040FB44  C2 10 00                  RET 0x10
LAB_0040fb47:
0040FB47  2B CA                     SUB ECX,EDX
0040FB49  03 D0                     ADD EDX,EAX
0040FB4B  3B CA                     CMP ECX,EDX
0040FB4D  7F B3                     JG 0x0040fb02
LAB_0040fb4f:
0040FB4F  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0040FB52  FE 04 31                  INC byte ptr [ECX + ESI*0x1]
0040FB55  41                        INC ECX
0040FB56  3B CA                     CMP ECX,EDX
0040FB58  7E F5                     JLE 0x0040fb4f
0040FB5A  8B CE                     MOV ECX,ESI
0040FB5C  5F                        POP EDI
0040FB5D  5E                        POP ESI
0040FB5E  8A 14 08                  MOV DL,byte ptr [EAX + ECX*0x1]
0040FB61  02 D3                     ADD DL,BL
0040FB63  5B                        POP EBX
0040FB64  88 14 08                  MOV byte ptr [EAX + ECX*0x1],DL
0040FB67  8B E5                     MOV ESP,EBP
0040FB69  5D                        POP EBP
0040FB6A  C2 10 00                  RET 0x10
