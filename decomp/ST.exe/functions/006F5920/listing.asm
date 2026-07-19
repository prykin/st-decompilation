FUN_006f5920:
006F5920  55                        PUSH EBP
006F5921  8B EC                     MOV EBP,ESP
006F5923  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006F5926  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
006F5929  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
006F592C  53                        PUSH EBX
006F592D  56                        PUSH ESI
006F592E  57                        PUSH EDI
006F592F  A3 1C 70 85 00            MOV [0x0085701c],EAX
006F5934  89 0D 24 70 85 00         MOV dword ptr [0x00857024],ECX
006F593A  89 15 20 70 85 00         MOV dword ptr [0x00857020],EDX
006F5940  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006F5943  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006F5946  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006F5949  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006F594C  C1 E2 10                  SHL EDX,0x10
006F594F  80 3D 00 70 85 00 00      CMP byte ptr [0x00857000],0x0
006F5956  0F 85 F8 00 00 00         JNZ 0x006f5a54
LAB_006f595c:
006F595C  33 C9                     XOR ECX,ECX
006F595E  8A 0E                     MOV CL,byte ptr [ESI]
006F5960  46                        INC ESI
006F5961  0B C9                     OR ECX,ECX
006F5963  0F 84 C8 00 00 00         JZ 0x006f5a31
006F5969  55                        PUSH EBP
006F596A  8B 6D 20                  MOV EBP,dword ptr [EBP + 0x20]
LAB_006f596d:
006F596D  F6 C1 80                  TEST CL,0x80
006F5970  75 1D                     JNZ 0x006f598f
LAB_006f5972:
006F5972  03 F9                     ADD EDI,ECX
006F5974  01 0D 24 70 85 00         ADD dword ptr [0x00857024],ECX
006F597A  8D 1C 4B                  LEA EBX,[EBX + ECX*0x2]
006F597D  2B E9                     SUB EBP,ECX
006F597F  0F 8E 88 00 00 00         JLE 0x006f5a0d
006F5985  33 C9                     XOR ECX,ECX
006F5987  8A 0E                     MOV CL,byte ptr [ESI]
006F5989  46                        INC ESI
006F598A  F6 C1 80                  TEST CL,0x80
006F598D  74 E3                     JZ 0x006f5972
LAB_006f598f:
006F598F  F6 C1 40                  TEST CL,0x40
006F5992  74 32                     JZ 0x006f59c6
006F5994  33 C0                     XOR EAX,EAX
006F5996  83 E1 3F                  AND ECX,0x3f
006F5999  AC                        LODSB ESI
006F599A  2B E9                     SUB EBP,ECX
006F599C  03 05 1C 70 85 00         ADD EAX,dword ptr [0x0085701c]
006F59A2  8A 00                     MOV AL,byte ptr [EAX]
LAB_006f59a4:
006F59A4  3B 53 FE                  CMP EDX,dword ptr [EBX + -0x2]
006F59A7  77 11                     JA 0x006f59ba
006F59A9  88 07                     MOV byte ptr [EDI],AL
006F59AB  FF 05 24 70 85 00         INC dword ptr [0x00857024]
006F59B1  47                        INC EDI
006F59B2  83 C3 02                  ADD EBX,0x2
006F59B5  49                        DEC ECX
006F59B6  7F EC                     JG 0x006f59a4
006F59B8  EB 45                     JMP 0x006f59ff
LAB_006f59ba:
006F59BA  C6 05 00 70 85 00 01      MOV byte ptr [0x00857000],0x1
006F59C1  E9 EF 00 00 00            JMP 0x006f5ab5
LAB_006f59c6:
006F59C6  83 E1 3F                  AND ECX,0x3f
006F59C9  2B E9                     SUB EBP,ECX
006F59CB  55                        PUSH EBP
006F59CC  8B 2D 1C 70 85 00         MOV EBP,dword ptr [0x0085701c]
LAB_006f59d2:
006F59D2  3B 53 FE                  CMP EDX,dword ptr [EBX + -0x2]
006F59D5  77 1C                     JA 0x006f59f3
006F59D7  33 C0                     XOR EAX,EAX
006F59D9  8A 06                     MOV AL,byte ptr [ESI]
006F59DB  83 C3 02                  ADD EBX,0x2
006F59DE  47                        INC EDI
006F59DF  46                        INC ESI
006F59E0  FF 05 24 70 85 00         INC dword ptr [0x00857024]
006F59E6  8A 44 05 00               MOV AL,byte ptr [EBP + EAX*0x1]
006F59EA  49                        DEC ECX
006F59EB  88 47 FF                  MOV byte ptr [EDI + -0x1],AL
006F59EE  7F E2                     JG 0x006f59d2
006F59F0  5D                        POP EBP
006F59F1  EB 0C                     JMP 0x006f59ff
LAB_006f59f3:
006F59F3  C6 05 00 70 85 00 01      MOV byte ptr [0x00857000],0x1
006F59FA  E9 21 01 00 00            JMP 0x006f5b20
LAB_006f59ff:
006F59FF  0B ED                     OR EBP,EBP
006F5A01  7E 0A                     JLE 0x006f5a0d
006F5A03  33 C9                     XOR ECX,ECX
006F5A05  8A 0E                     MOV CL,byte ptr [ESI]
006F5A07  46                        INC ESI
006F5A08  E9 60 FF FF FF            JMP 0x006f596d
LAB_006f5a0d:
006F5A0D  5D                        POP EBP
006F5A0E  8B 0D 24 70 85 00         MOV ECX,dword ptr [0x00857024]
006F5A14  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
006F5A17  03 4D 30                  ADD ECX,dword ptr [EBP + 0x30]
006F5A1A  2B 7D 20                  SUB EDI,dword ptr [EBP + 0x20]
006F5A1D  03 5D 14                  ADD EBX,dword ptr [EBP + 0x14]
006F5A20  2B 4D 20                  SUB ECX,dword ptr [EBP + 0x20]
006F5A23  2B 5D 20                  SUB EBX,dword ptr [EBP + 0x20]
006F5A26  89 0D 24 70 85 00         MOV dword ptr [0x00857024],ECX
006F5A2C  2B 5D 20                  SUB EBX,dword ptr [EBP + 0x20]
006F5A2F  EB 15                     JMP 0x006f5a46
LAB_006f5a31:
006F5A31  8B 0D 24 70 85 00         MOV ECX,dword ptr [0x00857024]
006F5A37  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
006F5A3A  03 4D 30                  ADD ECX,dword ptr [EBP + 0x30]
006F5A3D  03 5D 14                  ADD EBX,dword ptr [EBP + 0x14]
006F5A40  89 0D 24 70 85 00         MOV dword ptr [0x00857024],ECX
LAB_006f5a46:
006F5A46  FF 4D 24                  DEC dword ptr [EBP + 0x24]
006F5A49  0F 8F 0D FF FF FF         JG 0x006f595c
006F5A4F  E9 6C 01 00 00            JMP 0x006f5bc0
LAB_006f5a54:
006F5A54  33 C9                     XOR ECX,ECX
006F5A56  8A 0E                     MOV CL,byte ptr [ESI]
006F5A58  46                        INC ESI
006F5A59  0B C9                     OR ECX,ECX
006F5A5B  0F 84 41 01 00 00         JZ 0x006f5ba2
006F5A61  55                        PUSH EBP
006F5A62  8B 6D 20                  MOV EBP,dword ptr [EBP + 0x20]
LAB_006f5a65:
006F5A65  F6 C1 80                  TEST CL,0x80
006F5A68  75 1D                     JNZ 0x006f5a87
LAB_006f5a6a:
006F5A6A  03 F9                     ADD EDI,ECX
006F5A6C  01 0D 24 70 85 00         ADD dword ptr [0x00857024],ECX
006F5A72  8D 1C 4B                  LEA EBX,[EBX + ECX*0x2]
006F5A75  2B E9                     SUB EBP,ECX
006F5A77  0F 8E 01 01 00 00         JLE 0x006f5b7e
006F5A7D  33 C9                     XOR ECX,ECX
006F5A7F  8A 0E                     MOV CL,byte ptr [ESI]
006F5A81  46                        INC ESI
006F5A82  F6 C1 80                  TEST CL,0x80
006F5A85  74 E3                     JZ 0x006f5a6a
LAB_006f5a87:
006F5A87  F6 C1 40                  TEST CL,0x40
006F5A8A  74 65                     JZ 0x006f5af1
006F5A8C  33 C0                     XOR EAX,EAX
006F5A8E  83 E1 3F                  AND ECX,0x3f
006F5A91  AC                        LODSB ESI
006F5A92  2B E9                     SUB EBP,ECX
006F5A94  03 05 1C 70 85 00         ADD EAX,dword ptr [0x0085701c]
006F5A9A  8A 00                     MOV AL,byte ptr [EAX]
LAB_006f5a9c:
006F5A9C  3B 53 FE                  CMP EDX,dword ptr [EBX + -0x2]
006F5A9F  77 14                     JA 0x006f5ab5
LAB_006f5aa1:
006F5AA1  88 07                     MOV byte ptr [EDI],AL
006F5AA3  47                        INC EDI
006F5AA4  FF 05 24 70 85 00         INC dword ptr [0x00857024]
006F5AAA  83 C3 02                  ADD EBX,0x2
006F5AAD  49                        DEC ECX
006F5AAE  7F EC                     JG 0x006f5a9c
006F5AB0  E9 BB 00 00 00            JMP 0x006f5b70
LAB_006f5ab5:
006F5AB5  56                        PUSH ESI
006F5AB6  55                        PUSH EBP
006F5AB7  8B 35 24 70 85 00         MOV ESI,dword ptr [0x00857024]
006F5ABD  50                        PUSH EAX
006F5ABE  8B 2D 20 70 85 00         MOV EBP,dword ptr [0x00857020]
FUN_006f5920::cf_continue_loop_006F5AC4:
006F5AC4  33 C0                     XOR EAX,EAX
006F5AC6  8A 06                     MOV AL,byte ptr [ESI]
006F5AC8  46                        INC ESI
006F5AC9  83 C3 02                  ADD EBX,0x2
006F5ACC  8A 44 05 00               MOV AL,byte ptr [EBP + EAX*0x1]
006F5AD0  88 07                     MOV byte ptr [EDI],AL
006F5AD2  47                        INC EDI
006F5AD3  49                        DEC ECX
006F5AD4  7E 10                     JLE 0x006f5ae6
006F5AD6  3B 53 FE                  CMP EDX,dword ptr [EBX + -0x2]
006F5AD9  77 E9                     JA 0x006f5ac4
006F5ADB  58                        POP EAX
006F5ADC  89 35 24 70 85 00         MOV dword ptr [0x00857024],ESI
006F5AE2  5D                        POP EBP
006F5AE3  5E                        POP ESI
006F5AE4  EB BB                     JMP 0x006f5aa1
LAB_006f5ae6:
006F5AE6  58                        POP EAX
006F5AE7  89 35 24 70 85 00         MOV dword ptr [0x00857024],ESI
006F5AED  5D                        POP EBP
006F5AEE  5E                        POP ESI
006F5AEF  EB 7F                     JMP 0x006f5b70
LAB_006f5af1:
006F5AF1  83 E1 3F                  AND ECX,0x3f
006F5AF4  33 C0                     XOR EAX,EAX
006F5AF6  2B E9                     SUB EBP,ECX
006F5AF8  55                        PUSH EBP
006F5AF9  8B 2D 1C 70 85 00         MOV EBP,dword ptr [0x0085701c]
LAB_006f5aff:
006F5AFF  3B 53 FE                  CMP EDX,dword ptr [EBX + -0x2]
006F5B02  77 1C                     JA 0x006f5b20
LAB_006f5b04:
006F5B04  33 C0                     XOR EAX,EAX
006F5B06  8A 06                     MOV AL,byte ptr [ESI]
006F5B08  47                        INC EDI
006F5B09  46                        INC ESI
006F5B0A  FF 05 24 70 85 00         INC dword ptr [0x00857024]
006F5B10  83 C3 02                  ADD EBX,0x2
006F5B13  8A 44 05 00               MOV AL,byte ptr [EBP + EAX*0x1]
006F5B17  49                        DEC ECX
006F5B18  88 47 FF                  MOV byte ptr [EDI + -0x1],AL
006F5B1B  7F E2                     JG 0x006f5aff
006F5B1D  5D                        POP EBP
006F5B1E  EB 50                     JMP 0x006f5b70
LAB_006f5b20:
006F5B20  89 35 18 70 85 00         MOV dword ptr [0x00857018],ESI
006F5B26  8B 2D 20 70 85 00         MOV EBP,dword ptr [0x00857020]
006F5B2C  8B 35 24 70 85 00         MOV ESI,dword ptr [0x00857024]
LAB_006f5b32:
006F5B32  33 C0                     XOR EAX,EAX
006F5B34  8A 06                     MOV AL,byte ptr [ESI]
006F5B36  83 C3 02                  ADD EBX,0x2
006F5B39  FF 05 18 70 85 00         INC dword ptr [0x00857018]
006F5B3F  8A 44 05 00               MOV AL,byte ptr [EBP + EAX*0x1]
006F5B43  88 07                     MOV byte ptr [EDI],AL
006F5B45  46                        INC ESI
006F5B46  47                        INC EDI
006F5B47  49                        DEC ECX
006F5B48  7E 19                     JLE 0x006f5b63
006F5B4A  3B 53 FE                  CMP EDX,dword ptr [EBX + -0x2]
006F5B4D  77 E3                     JA 0x006f5b32
006F5B4F  89 35 24 70 85 00         MOV dword ptr [0x00857024],ESI
006F5B55  8B 2D 1C 70 85 00         MOV EBP,dword ptr [0x0085701c]
006F5B5B  8B 35 18 70 85 00         MOV ESI,dword ptr [0x00857018]
006F5B61  EB A1                     JMP 0x006f5b04
LAB_006f5b63:
006F5B63  89 35 24 70 85 00         MOV dword ptr [0x00857024],ESI
006F5B69  5D                        POP EBP
006F5B6A  8B 35 18 70 85 00         MOV ESI,dword ptr [0x00857018]
LAB_006f5b70:
006F5B70  0B ED                     OR EBP,EBP
006F5B72  7E 0A                     JLE 0x006f5b7e
006F5B74  33 C9                     XOR ECX,ECX
006F5B76  8A 0E                     MOV CL,byte ptr [ESI]
006F5B78  46                        INC ESI
006F5B79  E9 E7 FE FF FF            JMP 0x006f5a65
LAB_006f5b7e:
006F5B7E  8B 0D 24 70 85 00         MOV ECX,dword ptr [0x00857024]
006F5B84  5D                        POP EBP
006F5B85  03 4D 30                  ADD ECX,dword ptr [EBP + 0x30]
006F5B88  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
006F5B8B  2B 4D 20                  SUB ECX,dword ptr [EBP + 0x20]
006F5B8E  2B 7D 20                  SUB EDI,dword ptr [EBP + 0x20]
006F5B91  03 5D 14                  ADD EBX,dword ptr [EBP + 0x14]
006F5B94  89 0D 24 70 85 00         MOV dword ptr [0x00857024],ECX
006F5B9A  2B 5D 20                  SUB EBX,dword ptr [EBP + 0x20]
006F5B9D  2B 5D 20                  SUB EBX,dword ptr [EBP + 0x20]
006F5BA0  EB 15                     JMP 0x006f5bb7
LAB_006f5ba2:
006F5BA2  8B 0D 24 70 85 00         MOV ECX,dword ptr [0x00857024]
006F5BA8  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
006F5BAB  03 4D 30                  ADD ECX,dword ptr [EBP + 0x30]
006F5BAE  03 5D 14                  ADD EBX,dword ptr [EBP + 0x14]
006F5BB1  89 0D 24 70 85 00         MOV dword ptr [0x00857024],ECX
LAB_006f5bb7:
006F5BB7  FF 4D 24                  DEC dword ptr [EBP + 0x24]
006F5BBA  0F 8F 94 FE FF FF         JG 0x006f5a54
LAB_006f5bc0:
006F5BC0  5F                        POP EDI
006F5BC1  5E                        POP ESI
006F5BC2  5B                        POP EBX
006F5BC3  5D                        POP EBP
006F5BC4  C2 30 00                  RET 0x30
