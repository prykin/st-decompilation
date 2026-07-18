FUN_006bf710:
006BF710  55                        PUSH EBP
006BF711  8B EC                     MOV EBP,ESP
006BF713  6A FF                     PUSH -0x1
006BF715  68 80 D9 79 00            PUSH 0x79d980
006BF71A  68 64 D9 72 00            PUSH 0x72d964
006BF71F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
006BF725  50                        PUSH EAX
006BF726  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
006BF72D  83 EC 38                  SUB ESP,0x38
006BF730  53                        PUSH EBX
006BF731  56                        PUSH ESI
006BF732  57                        PUSH EDI
006BF733  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006BF736  C7 45 D8 00 00 00 00      MOV dword ptr [EBP + -0x28],0x0
006BF73D  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006BF740  8B 9E 10 02 00 00         MOV EBX,dword ptr [ESI + 0x210]
006BF746  89 5D D4                  MOV dword ptr [EBP + -0x2c],EBX
006BF749  8B 8E E4 01 00 00         MOV ECX,dword ptr [ESI + 0x1e4]
006BF74F  8B 84 8E F0 00 00 00      MOV EAX,dword ptr [ESI + ECX*0x4 + 0xf0]
006BF756  85 C0                     TEST EAX,EAX
006BF758  0F 84 75 02 00 00         JZ 0x006bf9d3
006BF75E  8B 86 F4 01 00 00         MOV EAX,dword ptr [ESI + 0x1f4]
006BF764  0F AF 45 18               IMUL EAX,dword ptr [EBP + 0x18]
006BF768  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006BF76B  03 C7                     ADD EAX,EDI
006BF76D  8B 96 04 02 00 00         MOV EDX,dword ptr [ESI + 0x204]
006BF773  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
006BF776  85 D2                     TEST EDX,EDX
006BF778  74 05                     JZ 0x006bf77f
006BF77A  03 D0                     ADD EDX,EAX
006BF77C  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
LAB_006bf77f:
006BF77F  8B 96 1C 02 00 00         MOV EDX,dword ptr [ESI + 0x21c]
006BF785  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
006BF788  85 D2                     TEST EDX,EDX
006BF78A  74 05                     JZ 0x006bf791
006BF78C  03 D0                     ADD EDX,EAX
006BF78E  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
LAB_006bf791:
006BF791  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006BF798  C1 E1 04                  SHL ECX,0x4
006BF79B  03 CE                     ADD ECX,ESI
006BF79D  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
006BF7A0  0F AF 45 10               IMUL EAX,dword ptr [EBP + 0x10]
006BF7A4  03 41 14                  ADD EAX,dword ptr [ECX + 0x14]
006BF7A7  01 45 0C                  ADD dword ptr [EBP + 0xc],EAX
006BF7AA  8B 86 08 02 00 00         MOV EAX,dword ptr [ESI + 0x208]
006BF7B0  85 C0                     TEST EAX,EAX
006BF7B2  74 73                     JZ 0x006bf827
006BF7B4  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006BF7B7  8B 96 20 02 00 00         MOV EDX,dword ptr [ESI + 0x220]
006BF7BD  52                        PUSH EDX
006BF7BE  53                        PUSH EBX
006BF7BF  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
006BF7C2  52                        PUSH EDX
006BF7C3  51                        PUSH ECX
006BF7C4  33 D2                     XOR EDX,EDX
006BF7C6  66 8B 50 0E               MOV DX,word ptr [EAX + 0xe]
006BF7CA  0F AF D1                  IMUL EDX,ECX
006BF7CD  83 C2 1F                  ADD EDX,0x1f
006BF7D0  C1 EA 03                  SHR EDX,0x3
006BF7D3  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
006BF7D9  F7 DA                     NEG EDX
006BF7DB  52                        PUSH EDX
006BF7DC  8B 86 0C 02 00 00         MOV EAX,dword ptr [ESI + 0x20c]
006BF7E2  50                        PUSH EAX
006BF7E3  8B 8E F0 01 00 00         MOV ECX,dword ptr [ESI + 0x1f0]
006BF7E9  51                        PUSH ECX
006BF7EA  8B 96 EC 01 00 00         MOV EDX,dword ptr [ESI + 0x1ec]
006BF7F0  52                        PUSH EDX
006BF7F1  8B 86 18 02 00 00         MOV EAX,dword ptr [ESI + 0x218]
006BF7F7  50                        PUSH EAX
006BF7F8  8B 8E 14 02 00 00         MOV ECX,dword ptr [ESI + 0x214]
006BF7FE  51                        PUSH ECX
006BF7FF  8B 96 00 02 00 00         MOV EDX,dword ptr [ESI + 0x200]
006BF805  52                        PUSH EDX
006BF806  8B 86 FC 01 00 00         MOV EAX,dword ptr [ESI + 0x1fc]
006BF80C  50                        PUSH EAX
006BF80D  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006BF810  51                        PUSH ECX
006BF811  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006BF814  52                        PUSH EDX
006BF815  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006BF818  50                        PUSH EAX
006BF819  57                        PUSH EDI
006BF81A  8B 86 F4 01 00 00         MOV EAX,dword ptr [ESI + 0x1f4]
006BF820  50                        PUSH EAX
006BF821  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006BF824  51                        PUSH ECX
006BF825  EB 4F                     JMP 0x006bf876
LAB_006bf827:
006BF827  8B 86 20 02 00 00         MOV EAX,dword ptr [ESI + 0x220]
006BF82D  50                        PUSH EAX
006BF82E  53                        PUSH EBX
006BF82F  6A 00                     PUSH 0x0
006BF831  6A 00                     PUSH 0x0
006BF833  6A 00                     PUSH 0x0
006BF835  6A 00                     PUSH 0x0
006BF837  8B 8E F0 01 00 00         MOV ECX,dword ptr [ESI + 0x1f0]
006BF83D  51                        PUSH ECX
006BF83E  8B 86 EC 01 00 00         MOV EAX,dword ptr [ESI + 0x1ec]
006BF844  50                        PUSH EAX
006BF845  8B 8E 18 02 00 00         MOV ECX,dword ptr [ESI + 0x218]
006BF84B  51                        PUSH ECX
006BF84C  8B 86 14 02 00 00         MOV EAX,dword ptr [ESI + 0x214]
006BF852  50                        PUSH EAX
006BF853  8B 8E 00 02 00 00         MOV ECX,dword ptr [ESI + 0x200]
006BF859  51                        PUSH ECX
006BF85A  8B 86 FC 01 00 00         MOV EAX,dword ptr [ESI + 0x1fc]
006BF860  50                        PUSH EAX
006BF861  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006BF864  51                        PUSH ECX
006BF865  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006BF868  50                        PUSH EAX
006BF869  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006BF86C  51                        PUSH ECX
006BF86D  57                        PUSH EDI
006BF86E  8B 86 F4 01 00 00         MOV EAX,dword ptr [ESI + 0x1f4]
006BF874  50                        PUSH EAX
006BF875  52                        PUSH EDX
LAB_006bf876:
006BF876  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
006BF879  52                        PUSH EDX
006BF87A  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006BF87D  50                        PUSH EAX
006BF87E  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006BF881  51                        PUSH ECX
006BF882  E8 F9 44 01 00            CALL 0x006d3d80
006BF887  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006BF88A  83 3A 00                  CMP dword ptr [EDX],0x0
006BF88D  0F 85 39 01 00 00         JNZ 0x006bf9cc
006BF893  8B 86 F4 01 00 00         MOV EAX,dword ptr [ESI + 0x1f4]
006BF899  83 C0 07                  ADD EAX,0x7
006BF89C  99                        CDQ
006BF89D  83 E2 07                  AND EDX,0x7
006BF8A0  03 C2                     ADD EAX,EDX
006BF8A2  C1 F8 03                  SAR EAX,0x3
006BF8A5  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006BF8A8  85 DB                     TEST EBX,EBX
006BF8AA  74 12                     JZ 0x006bf8be
006BF8AC  0F AF 45 18               IMUL EAX,dword ptr [EBP + 0x18]
006BF8B0  8B CF                     MOV ECX,EDI
006BF8B2  C1 F9 03                  SAR ECX,0x3
006BF8B5  03 CB                     ADD ECX,EBX
006BF8B7  03 C8                     ADD ECX,EAX
006BF8B9  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
006BF8BC  8B D9                     MOV EBX,ECX
LAB_006bf8be:
006BF8BE  8B 96 E4 01 00 00         MOV EDX,dword ptr [ESI + 0x1e4]
006BF8C4  8B 8E F0 01 00 00         MOV ECX,dword ptr [ESI + 0x1f0]
006BF8CA  0F AF 4D 18               IMUL ECX,dword ptr [EBP + 0x18]
006BF8CE  8B 84 D6 20 01 00 00      MOV EAX,dword ptr [ESI + EDX*0x8 + 0x120]
006BF8D5  03 C1                     ADD EAX,ECX
006BF8D7  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006BF8DA  C7 45 C0 00 00 00 00      MOV dword ptr [EBP + -0x40],0x0
LAB_006bf8e1:
006BF8E1  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
006BF8E4  3B 55 20                  CMP EDX,dword ptr [EBP + 0x20]
006BF8E7  0F 8D DF 00 00 00         JGE 0x006bf9cc
006BF8ED  89 5D D0                  MOV dword ptr [EBP + -0x30],EBX
006BF8F0  8B CF                     MOV ECX,EDI
006BF8F2  83 E1 07                  AND ECX,0x7
006BF8F5  BB 80 00 00 00            MOV EBX,0x80
006BF8FA  D3 FB                     SAR EBX,CL
006BF8FC  88 5D CC                  MOV byte ptr [EBP + -0x34],BL
006BF8FF  8B 86 EC 01 00 00         MOV EAX,dword ptr [ESI + 0x1ec]
006BF905  8B 8E E4 01 00 00         MOV ECX,dword ptr [ESI + 0x1e4]
006BF90B  8B D0                     MOV EDX,EAX
006BF90D  0F AF D7                  IMUL EDX,EDI
006BF910  8B BC CE 1C 01 00 00      MOV EDI,dword ptr [ESI + ECX*0x8 + 0x11c]
006BF917  03 FA                     ADD EDI,EDX
006BF919  89 7D BC                  MOV dword ptr [EBP + -0x44],EDI
006BF91C  C7 45 C8 00 00 00 00      MOV dword ptr [EBP + -0x38],0x0
LAB_006bf923:
006BF923  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
006BF926  3B 4D 1C                  CMP ECX,dword ptr [EBP + 0x1c]
006BF929  7D 3A                     JGE 0x006bf965
006BF92B  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006BF92E  84 1A                     TEST byte ptr [EDX],BL
006BF930  74 68                     JZ 0x006bf99a
006BF932  6A 01                     PUSH 0x1
006BF934  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
006BF937  51                        PUSH ECX
006BF938  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
006BF93B  52                        PUSH EDX
006BF93C  8B 8E F0 01 00 00         MOV ECX,dword ptr [ESI + 0x1f0]
006BF942  51                        PUSH ECX
006BF943  50                        PUSH EAX
006BF944  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006BF947  52                        PUSH EDX
006BF948  57                        PUSH EDI
006BF949  6A 64                     PUSH 0x64
006BF94B  8B 86 C0 01 00 00         MOV EAX,dword ptr [ESI + 0x1c0]
006BF951  50                        PUSH EAX
006BF952  E8 79 21 01 00            CALL 0x006d1ad0
006BF957  83 F8 FF                  CMP EAX,-0x1
006BF95A  75 3E                     JNZ 0x006bf99a
006BF95C  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006BF95F  C7 01 01 00 00 00         MOV dword ptr [ECX],0x1
LAB_006bf965:
006BF965  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006BF968  83 3A 00                  CMP dword ptr [EDX],0x0
006BF96B  75 5F                     JNZ 0x006bf9cc
006BF96D  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
006BF970  85 C0                     TEST EAX,EAX
006BF972  74 06                     JZ 0x006bf97a
006BF974  03 45 E4                  ADD EAX,dword ptr [EBP + -0x1c]
006BF977  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
LAB_006bf97a:
006BF97A  8B 86 F0 01 00 00         MOV EAX,dword ptr [ESI + 0x1f0]
006BF980  8B C8                     MOV ECX,EAX
006BF982  0F AF 4D 10               IMUL ECX,dword ptr [EBP + 0x10]
006BF986  01 4D 0C                  ADD dword ptr [EBP + 0xc],ECX
006BF989  FF 45 C0                  INC dword ptr [EBP + -0x40]
006BF98C  01 45 B8                  ADD dword ptr [EBP + -0x48],EAX
006BF98F  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006BF992  8B 5D D4                  MOV EBX,dword ptr [EBP + -0x2c]
006BF995  E9 47 FF FF FF            JMP 0x006bf8e1
LAB_006bf99a:
006BF99A  D0 EB                     SHR BL,0x1
006BF99C  88 5D CC                  MOV byte ptr [EBP + -0x34],BL
006BF99F  75 08                     JNZ 0x006bf9a9
006BF9A1  B3 80                     MOV BL,0x80
006BF9A3  88 5D CC                  MOV byte ptr [EBP + -0x34],BL
006BF9A6  FF 45 D0                  INC dword ptr [EBP + -0x30]
LAB_006bf9a9:
006BF9A9  FF 45 C8                  INC dword ptr [EBP + -0x38]
006BF9AC  8B 86 EC 01 00 00         MOV EAX,dword ptr [ESI + 0x1ec]
006BF9B2  03 F8                     ADD EDI,EAX
006BF9B4  89 7D BC                  MOV dword ptr [EBP + -0x44],EDI
006BF9B7  E9 67 FF FF FF            JMP 0x006bf923
LAB_006bf9cc:
006BF9CC  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
LAB_006bf9d3:
006BF9D3  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006BF9D6  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006BF9D9  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006BF9E0  5F                        POP EDI
006BF9E1  5E                        POP ESI
006BF9E2  5B                        POP EBX
006BF9E3  8B E5                     MOV ESP,EBP
006BF9E5  5D                        POP EBP
006BF9E6  C2 20 00                  RET 0x20
