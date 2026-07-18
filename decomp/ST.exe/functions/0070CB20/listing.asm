FUN_0070cb20:
0070CB20  55                        PUSH EBP
0070CB21  8B EC                     MOV EBP,ESP
0070CB23  83 EC 54                  SUB ESP,0x54
0070CB26  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
0070CB29  33 C9                     XOR ECX,ECX
0070CB2B  3D 00 00 80 00            CMP EAX,0x800000
0070CB30  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0070CB33  C7 45 F4 10 00 00 00      MOV dword ptr [EBP + -0xc],0x10
0070CB3A  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0070CB3D  74 10                     JZ 0x0070cb4f
0070CB3F  3D 00 00 00 01            CMP EAX,0x1000000
0070CB44  75 10                     JNZ 0x0070cb56
0070CB46  C7 45 F4 20 00 00 00      MOV dword ptr [EBP + -0xc],0x20
0070CB4D  EB 07                     JMP 0x0070cb56
LAB_0070cb4f:
0070CB4F  C7 45 F4 04 00 00 00      MOV dword ptr [EBP + -0xc],0x4
LAB_0070cb56:
0070CB56  8D 45 B0                  LEA EAX,[EBP + -0x50]
0070CB59  53                        PUSH EBX
0070CB5A  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
0070CB5D  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0070CB60  B8 4C 01 7F 00            MOV EAX,0x7f014c
0070CB65  56                        PUSH ESI
0070CB66  57                        PUSH EDI
0070CB67  89 4D 2C                  MOV dword ptr [EBP + 0x2c],ECX
0070CB6A  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0070cb6d:
0070CB6D  8B 70 FC                  MOV ESI,dword ptr [EAX + -0x4]
0070CB70  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0070CB73  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0070CB76  03 F7                     ADD ESI,EDI
0070CB78  8B 38                     MOV EDI,dword ptr [EAX]
0070CB7A  03 FA                     ADD EDI,EDX
0070CB7C  85 F6                     TEST ESI,ESI
0070CB7E  0F 8C 83 00 00 00         JL 0x0070cc07
0070CB84  3B 75 14                  CMP ESI,dword ptr [EBP + 0x14]
0070CB87  7D 7E                     JGE 0x0070cc07
0070CB89  85 FF                     TEST EDI,EDI
0070CB8B  7C 7A                     JL 0x0070cc07
0070CB8D  3B 7D 18                  CMP EDI,dword ptr [EBP + 0x18]
0070CB90  7D 75                     JGE 0x0070cc07
0070CB92  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0070CB95  51                        PUSH ECX
0070CB96  E8 05 84 FA FF            CALL 0x006b4fa0
0070CB9B  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0070CB9E  33 D2                     XOR EDX,EDX
0070CBA0  03 F0                     ADD ESI,EAX
0070CBA2  66 8B 51 0E               MOV DX,word ptr [ECX + 0xe]
0070CBA6  0F AF 51 04               IMUL EDX,dword ptr [ECX + 0x4]
0070CBAA  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
0070CBAD  83 C2 1F                  ADD EDX,0x1f
0070CBB0  C1 EA 03                  SHR EDX,0x3
0070CBB3  2B CF                     SUB ECX,EDI
0070CBB5  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
0070CBBB  49                        DEC ECX
0070CBBC  0F AF D1                  IMUL EDX,ECX
0070CBBF  8A 4D 20                  MOV CL,byte ptr [EBP + 0x20]
0070CBC2  8A 04 32                  MOV AL,byte ptr [EDX + ESI*0x1]
0070CBC5  3A C1                     CMP AL,CL
0070CBC7  88 45 24                  MOV byte ptr [EBP + 0x24],AL
0070CBCA  74 38                     JZ 0x0070cc04
0070CBCC  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
0070CBCF  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
0070CBD2  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
0070CBD5  25 FF 00 00 00            AND EAX,0xff
0070CBDA  33 C9                     XOR ECX,ECX
0070CBDC  89 56 FC                  MOV dword ptr [ESI + -0x4],EDX
0070CBDF  8A 4C 83 04               MOV CL,byte ptr [EBX + EAX*0x4 + 0x4]
0070CBE3  33 D2                     XOR EDX,EDX
0070CBE5  8A 54 83 05               MOV DL,byte ptr [EBX + EAX*0x4 + 0x5]
0070CBE9  89 0E                     MOV dword ptr [ESI],ECX
0070CBEB  33 C9                     XOR ECX,ECX
0070CBED  89 56 04                  MOV dword ptr [ESI + 0x4],EDX
0070CBF0  8A 4C 83 06               MOV CL,byte ptr [EBX + EAX*0x4 + 0x6]
0070CBF4  89 4E 08                  MOV dword ptr [ESI + 0x8],ECX
0070CBF7  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0070CBFA  41                        INC ECX
0070CBFB  83 C6 10                  ADD ESI,0x10
0070CBFE  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0070CC01  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
LAB_0070cc04:
0070CC04  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
LAB_0070cc07:
0070CC07  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
0070CC0A  83 C0 0C                  ADD EAX,0xc
0070CC0D  46                        INC ESI
0070CC0E  3D 7C 01 7F 00            CMP EAX,0x7f017c
0070CC13  89 75 2C                  MOV dword ptr [EBP + 0x2c],ESI
0070CC16  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0070CC19  0F 8C 4E FF FF FF         JL 0x0070cb6d
0070CC1F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070CC22  85 C0                     TEST EAX,EAX
0070CC24  0F 8E 4E 01 00 00         JLE 0x0070cd78
0070CC2A  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0070CC2D  B9 04 00 00 00            MOV ECX,0x4
0070CC32  8B F8                     MOV EDI,EAX
0070CC34  88 55 08                  MOV byte ptr [EBP + 0x8],DL
0070CC37  2B CF                     SUB ECX,EDI
0070CC39  81 E2 FF 00 00 00         AND EDX,0xff
0070CC3F  0F AF 4D F4               IMUL ECX,dword ptr [EBP + -0xc]
0070CC43  33 C0                     XOR EAX,EAX
0070CC45  8A 44 93 04               MOV AL,byte ptr [EBX + EDX*0x4 + 0x4]
0070CC49  8B F8                     MOV EDI,EAX
0070CC4B  33 C0                     XOR EAX,EAX
0070CC4D  8A 44 93 05               MOV AL,byte ptr [EBX + EDX*0x4 + 0x5]
0070CC51  0F AF F9                  IMUL EDI,ECX
0070CC54  0F AF C1                  IMUL EAX,ECX
0070CC57  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
0070CC5A  33 C0                     XOR EAX,EAX
0070CC5C  8A 44 93 06               MOV AL,byte ptr [EBX + EDX*0x4 + 0x6]
0070CC60  8B D8                     MOV EBX,EAX
0070CC62  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070CC65  0F AF D9                  IMUL EBX,ECX
0070CC68  85 C0                     TEST EAX,EAX
0070CC6A  89 5D 2C                  MOV dword ptr [EBP + 0x2c],EBX
0070CC6D  7E 4D                     JLE 0x0070ccbc
0070CC6F  C7 45 10 50 01 7F 00      MOV dword ptr [EBP + 0x10],0x7f0150
0070CC76  8D 75 B4                  LEA ESI,[EBP + -0x4c]
0070CC79  89 45 24                  MOV dword ptr [EBP + 0x24],EAX
LAB_0070cc7c:
0070CC7C  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0070CC7F  8B 46 FC                  MOV EAX,dword ptr [ESI + -0x4]
0070CC82  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
0070CC85  83 C6 10                  ADD ESI,0x10
0070CC88  8B 12                     MOV EDX,dword ptr [EDX]
0070CC8A  0F AF C2                  IMUL EAX,EDX
0070CC8D  03 F8                     ADD EDI,EAX
0070CC8F  8B C2                     MOV EAX,EDX
0070CC91  0F AF 46 F0               IMUL EAX,dword ptr [ESI + -0x10]
0070CC95  03 D8                     ADD EBX,EAX
0070CC97  8B 46 F4                  MOV EAX,dword ptr [ESI + -0xc]
0070CC9A  0F AF C2                  IMUL EAX,EDX
0070CC9D  89 5D 20                  MOV dword ptr [EBP + 0x20],EBX
0070CCA0  8B 5D 2C                  MOV EBX,dword ptr [EBP + 0x2c]
0070CCA3  03 CA                     ADD ECX,EDX
0070CCA5  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0070CCA8  03 D8                     ADD EBX,EAX
0070CCAA  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
0070CCAD  83 C2 0C                  ADD EDX,0xc
0070CCB0  48                        DEC EAX
0070CCB1  89 5D 2C                  MOV dword ptr [EBP + 0x2c],EBX
0070CCB4  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
0070CCB7  89 45 24                  MOV dword ptr [EBP + 0x24],EAX
0070CCBA  75 C0                     JNZ 0x0070cc7c
LAB_0070ccbc:
0070CCBC  85 C9                     TEST ECX,ECX
0070CCBE  8B F1                     MOV ESI,ECX
0070CCC0  75 05                     JNZ 0x0070ccc7
0070CCC2  BE 01 00 00 00            MOV ESI,0x1
LAB_0070ccc7:
0070CCC7  8B C7                     MOV EAX,EDI
0070CCC9  99                        CDQ
0070CCCA  F7 FE                     IDIV ESI
0070CCCC  85 C9                     TEST ECX,ECX
0070CCCE  8B F1                     MOV ESI,ECX
0070CCD0  8B F8                     MOV EDI,EAX
0070CCD2  75 05                     JNZ 0x0070ccd9
0070CCD4  BE 01 00 00 00            MOV ESI,0x1
LAB_0070ccd9:
0070CCD9  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0070CCDC  99                        CDQ
0070CCDD  F7 FE                     IDIV ESI
0070CCDF  85 C9                     TEST ECX,ECX
0070CCE1  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
0070CCE4  75 05                     JNZ 0x0070cceb
0070CCE6  B9 01 00 00 00            MOV ECX,0x1
LAB_0070cceb:
0070CCEB  8B C3                     MOV EAX,EBX
0070CCED  99                        CDQ
0070CCEE  F7 F9                     IDIV ECX
0070CCF0  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
0070CCF3  85 FF                     TEST EDI,EDI
0070CCF5  75 0F                     JNZ 0x0070cd06
0070CCF7  85 D2                     TEST EDX,EDX
0070CCF9  75 0B                     JNZ 0x0070cd06
0070CCFB  85 C0                     TEST EAX,EAX
0070CCFD  75 07                     JNZ 0x0070cd06
0070CCFF  5F                        POP EDI
0070CD00  5E                        POP ESI
0070CD01  5B                        POP EBX
0070CD02  8B E5                     MOV ESP,EBP
0070CD04  5D                        POP EBP
0070CD05  C3                        RET
LAB_0070cd06:
0070CD06  8B 5D 30                  MOV EBX,dword ptr [EBP + 0x30]
0070CD09  85 DB                     TEST EBX,EBX
0070CD0B  74 2E                     JZ 0x0070cd3b
0070CD0D  8B F7                     MOV ESI,EDI
0070CD0F  8B CA                     MOV ECX,EDX
0070CD11  83 E6 3F                  AND ESI,0x3f
0070CD14  83 E1 3F                  AND ECX,0x3f
0070CD17  C1 E6 06                  SHL ESI,0x6
0070CD1A  0B F1                     OR ESI,ECX
0070CD1C  8B C8                     MOV ECX,EAX
0070CD1E  C1 E6 06                  SHL ESI,0x6
0070CD21  83 E1 3F                  AND ECX,0x3f
0070CD24  0B F1                     OR ESI,ECX
0070CD26  8A 0C 1E                  MOV CL,byte ptr [ESI + EBX*0x1]
0070CD29  84 C9                     TEST CL,CL
0070CD2B  74 11                     JZ 0x0070cd3e
0070CD2D  8B C1                     MOV EAX,ECX
0070CD2F  5F                        POP EDI
0070CD30  5E                        POP ESI
0070CD31  25 FF 00 00 00            AND EAX,0xff
0070CD36  5B                        POP EBX
0070CD37  8B E5                     MOV ESP,EBP
0070CD39  5D                        POP EBP
0070CD3A  C3                        RET
LAB_0070cd3b:
0070CD3B  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
LAB_0070cd3e:
0070CD3E  33 C9                     XOR ECX,ECX
0070CD40  81 E7 FF 00 00 00         AND EDI,0xff
0070CD46  8A E8                     MOV CH,AL
0070CD48  8A CA                     MOV CL,DL
0070CD4A  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
0070CD4D  C1 E1 08                  SHL ECX,0x8
0070CD50  0B CF                     OR ECX,EDI
0070CD52  51                        PUSH ECX
0070CD53  52                        PUSH EDX
0070CD54  FF 15 A8 BA 85 00         CALL dword ptr [0x0085baa8]
0070CD5A  83 F8 FF                  CMP EAX,-0x1
0070CD5D  74 0A                     JZ 0x0070cd69
0070CD5F  85 DB                     TEST EBX,EBX
0070CD61  88 45 08                  MOV byte ptr [EBP + 0x8],AL
0070CD64  74 03                     JZ 0x0070cd69
0070CD66  88 04 1E                  MOV byte ptr [ESI + EBX*0x1],AL
LAB_0070cd69:
0070CD69  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0070CD6C  5F                        POP EDI
0070CD6D  5E                        POP ESI
0070CD6E  25 FF 00 00 00            AND EAX,0xff
0070CD73  5B                        POP EBX
0070CD74  8B E5                     MOV ESP,EBP
0070CD76  5D                        POP EBP
0070CD77  C3                        RET
LAB_0070cd78:
0070CD78  5F                        POP EDI
0070CD79  5E                        POP ESI
0070CD7A  83 C8 FF                  OR EAX,0xffffffff
0070CD7D  5B                        POP EBX
0070CD7E  8B E5                     MOV ESP,EBP
0070CD80  5D                        POP EBP
0070CD81  C3                        RET
