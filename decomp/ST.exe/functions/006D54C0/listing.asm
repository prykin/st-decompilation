FUN_006d54c0:
006D54C0  55                        PUSH EBP
006D54C1  8B EC                     MOV EBP,ESP
006D54C3  83 EC 18                  SUB ESP,0x18
006D54C6  53                        PUSH EBX
006D54C7  56                        PUSH ESI
006D54C8  8B F1                     MOV ESI,ECX
006D54CA  57                        PUSH EDI
006D54CB  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
006D54D2  8D 46 7C                  LEA EAX,[ESI + 0x7c]
006D54D5  50                        PUSH EAX
006D54D6  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006D54D9  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
006D54DF  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D54E2  8B CE                     MOV ECX,ESI
006D54E4  50                        PUSH EAX
006D54E5  E8 A9 4C 07 00            CALL 0x0074a193
006D54EA  8B BE 84 02 00 00         MOV EDI,dword ptr [ESI + 0x284]
006D54F0  8B 5F 0C                  MOV EBX,dword ptr [EDI + 0xc]
006D54F3  8B 4F 04                  MOV ECX,dword ptr [EDI + 0x4]
006D54F6  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
006D54F9  8B 17                     MOV EDX,dword ptr [EDI]
006D54FB  2B D9                     SUB EBX,ECX
006D54FD  2B C2                     SUB EAX,EDX
006D54FF  33 C9                     XOR ECX,ECX
006D5501  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006D5504  3B C1                     CMP EAX,ECX
006D5506  74 04                     JZ 0x006d550c
006D5508  3B D9                     CMP EBX,ECX
006D550A  75 13                     JNZ 0x006d551f
LAB_006d550c:
006D550C  8B 57 34                  MOV EDX,dword ptr [EDI + 0x34]
006D550F  8B 47 38                  MOV EAX,dword ptr [EDI + 0x38]
006D5512  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
006D5515  99                        CDQ
006D5516  8B D8                     MOV EBX,EAX
006D5518  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D551B  33 DA                     XOR EBX,EDX
006D551D  2B DA                     SUB EBX,EDX
LAB_006d551f:
006D551F  8B 96 88 02 00 00         MOV EDX,dword ptr [ESI + 0x288]
006D5525  51                        PUSH ECX
006D5526  51                        PUSH ECX
006D5527  89 4A 18                  MOV dword ptr [EDX + 0x18],ECX
006D552A  8B 96 88 02 00 00         MOV EDX,dword ptr [ESI + 0x288]
006D5530  89 4A 1C                  MOV dword ptr [EDX + 0x1c],ECX
006D5533  8B 96 88 02 00 00         MOV EDX,dword ptr [ESI + 0x288]
006D5539  89 42 20                  MOV dword ptr [EDX + 0x20],EAX
006D553C  8B 96 88 02 00 00         MOV EDX,dword ptr [ESI + 0x288]
006D5542  89 5A 24                  MOV dword ptr [EDX + 0x24],EBX
006D5545  8B 96 88 02 00 00         MOV EDX,dword ptr [ESI + 0x288]
006D554B  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
006D554E  8B 96 88 02 00 00         MOV EDX,dword ptr [ESI + 0x288]
006D5554  89 4A 0C                  MOV dword ptr [EDX + 0xc],ECX
006D5557  8B 96 88 02 00 00         MOV EDX,dword ptr [ESI + 0x288]
006D555D  89 42 10                  MOV dword ptr [EDX + 0x10],EAX
006D5560  8B 86 88 02 00 00         MOV EAX,dword ptr [ESI + 0x288]
006D5566  33 D2                     XOR EDX,EDX
006D5568  89 58 14                  MOV dword ptr [EAX + 0x14],EBX
006D556B  66 8B 57 3C               MOV DX,word ptr [EDI + 0x3c]
006D556F  33 C0                     XOR EAX,EAX
006D5571  66 8B 47 3E               MOV AX,word ptr [EDI + 0x3e]
006D5575  0F AF D0                  IMUL EDX,EAX
006D5578  8B 86 88 02 00 00         MOV EAX,dword ptr [ESI + 0x288]
006D557E  89 90 98 00 00 00         MOV dword ptr [EAX + 0x98],EDX
006D5584  8B 96 88 02 00 00         MOV EDX,dword ptr [ESI + 0x288]
006D558A  8B 47 28                  MOV EAX,dword ptr [EDI + 0x28]
006D558D  89 82 B0 00 00 00         MOV dword ptr [EDX + 0xb0],EAX
006D5593  8B 47 2C                  MOV EAX,dword ptr [EDI + 0x2c]
006D5596  89 82 B4 00 00 00         MOV dword ptr [EDX + 0xb4],EAX
006D559C  8B 96 88 02 00 00         MOV EDX,dword ptr [ESI + 0x288]
006D55A2  8B 47 20                  MOV EAX,dword ptr [EDI + 0x20]
006D55A5  89 82 B8 00 00 00         MOV dword ptr [EDX + 0xb8],EAX
006D55AB  8B 96 88 02 00 00         MOV EDX,dword ptr [ESI + 0x288]
006D55B1  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
006D55B4  89 82 BC 00 00 00         MOV dword ptr [EDX + 0xbc],EAX
006D55BA  8B 47 38                  MOV EAX,dword ptr [EDI + 0x38]
006D55BD  99                        CDQ
006D55BE  8B 4F 34                  MOV ECX,dword ptr [EDI + 0x34]
006D55C1  33 C2                     XOR EAX,EDX
006D55C3  2B C2                     SUB EAX,EDX
006D55C5  8D 55 FC                  LEA EDX,[EBP + -0x4]
006D55C8  50                        PUSH EAX
006D55C9  8B 86 88 02 00 00         MOV EAX,dword ptr [ESI + 0x288]
006D55CF  51                        PUSH ECX
006D55D0  52                        PUSH EDX
006D55D1  8B 48 28                  MOV ECX,dword ptr [EAX + 0x28]
006D55D4  51                        PUSH ECX
006D55D5  E8 76 ED FE FF            CALL 0x006c4350
006D55DA  85 C0                     TEST EAX,EAX
006D55DC  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006D55DF  75 4D                     JNZ 0x006d562e
006D55E1  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_006d55e4:
006D55E4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006D55E7  8D 55 F0                  LEA EDX,[EBP + -0x10]
006D55EA  6A 00                     PUSH 0x0
006D55EC  8D 45 E8                  LEA EAX,[EBP + -0x18]
006D55EF  52                        PUSH EDX
006D55F0  50                        PUSH EAX
006D55F1  51                        PUSH ECX
006D55F2  E8 49 68 FE FF            CALL 0x006bbe40
006D55F7  85 C0                     TEST EAX,EAX
006D55F9  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006D55FC  74 22                     JZ 0x006d5620
006D55FE  3D C2 01 76 88            CMP EAX,0x887601c2
006D5603  75 17                     JNZ 0x006d561c
006D5605  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006D5608  50                        PUSH EAX
006D5609  8B 10                     MOV EDX,dword ptr [EAX]
006D560B  FF 52 6C                  CALL dword ptr [EDX + 0x6c]
006D560E  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006D5611  40                        INC EAX
006D5612  83 F8 02                  CMP EAX,0x2
006D5615  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006D5618  7C CA                     JL 0x006d55e4
006D561A  EB 12                     JMP 0x006d562e
LAB_006d561c:
006D561C  85 C0                     TEST EAX,EAX
006D561E  75 0E                     JNZ 0x006d562e
LAB_006d5620:
006D5620  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006D5623  6A 00                     PUSH 0x0
006D5625  50                        PUSH EAX
006D5626  8B 08                     MOV ECX,dword ptr [EAX]
006D5628  FF 91 80 00 00 00         CALL dword ptr [ECX + 0x80]
LAB_006d562e:
006D562E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006D5631  85 C0                     TEST EAX,EAX
006D5633  74 0D                     JZ 0x006d5642
006D5635  8B 10                     MOV EDX,dword ptr [EAX]
006D5637  50                        PUSH EAX
006D5638  FF 52 08                  CALL dword ptr [EDX + 0x8]
006D563B  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_006d5642:
006D5642  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006D5645  85 C0                     TEST EAX,EAX
006D5647  75 74                     JNZ 0x006d56bd
006D5649  8B 86 88 02 00 00         MOV EAX,dword ptr [ESI + 0x288]
006D564F  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006D5652  8B 88 90 00 00 00         MOV ECX,dword ptr [EAX + 0x90]
006D5658  3B CA                     CMP ECX,EDX
006D565A  75 61                     JNZ 0x006d56bd
006D565C  39 98 94 00 00 00         CMP dword ptr [EAX + 0x94],EBX
006D5662  75 59                     JNZ 0x006d56bd
006D5664  8B 57 34                  MOV EDX,dword ptr [EDI + 0x34]
006D5667  33 C9                     XOR ECX,ECX
006D5669  66 8B 4F 3E               MOV CX,word ptr [EDI + 0x3e]
006D566D  0F AF D1                  IMUL EDX,ECX
006D5670  83 C2 1F                  ADD EDX,0x1f
006D5673  C1 EA 03                  SHR EDX,0x3
006D5676  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
006D567C  3B 55 F0                  CMP EDX,dword ptr [EBP + -0x10]
006D567F  75 3C                     JNZ 0x006d56bd
006D5681  8B 57 38                  MOV EDX,dword ptr [EDI + 0x38]
006D5684  85 D2                     TEST EDX,EDX
006D5686  7D 35                     JGE 0x006d56bd
006D5688  8B 40 28                  MOV EAX,dword ptr [EAX + 0x28]
006D568B  3B 48 20                  CMP ECX,dword ptr [EAX + 0x20]
006D568E  75 2D                     JNZ 0x006d56bd
006D5690  83 7F 40 03               CMP dword ptr [EDI + 0x40],0x3
006D5694  75 58                     JNZ 0x006d56ee
006D5696  8B 4F 58                  MOV ECX,dword ptr [EDI + 0x58]
006D5699  8B 90 C4 04 00 00         MOV EDX,dword ptr [EAX + 0x4c4]
006D569F  3B CA                     CMP ECX,EDX
006D56A1  75 1A                     JNZ 0x006d56bd
006D56A3  8B 57 5C                  MOV EDX,dword ptr [EDI + 0x5c]
006D56A6  8B 88 C8 04 00 00         MOV ECX,dword ptr [EAX + 0x4c8]
006D56AC  3B D1                     CMP EDX,ECX
006D56AE  75 0D                     JNZ 0x006d56bd
006D56B0  8B 4F 60                  MOV ECX,dword ptr [EDI + 0x60]
006D56B3  8B 90 CC 04 00 00         MOV EDX,dword ptr [EAX + 0x4cc]
006D56B9  3B CA                     CMP ECX,EDX
006D56BB  74 31                     JZ 0x006d56ee
LAB_006d56bd:
006D56BD  8B 96 88 02 00 00         MOV EDX,dword ptr [ESI + 0x288]
006D56C3  52                        PUSH EDX
006D56C4  E8 37 DE FE FF            CALL 0x006c3500
006D56C9  8B 86 88 02 00 00         MOV EAX,dword ptr [ESI + 0x288]
006D56CF  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006D56D2  C7 86 0C 03 00 00 00 00 00 00  MOV dword ptr [ESI + 0x30c],0x0
006D56DC  89 88 90 00 00 00         MOV dword ptr [EAX + 0x90],ECX
006D56E2  8B 96 88 02 00 00         MOV EDX,dword ptr [ESI + 0x288]
006D56E8  89 9A 94 00 00 00         MOV dword ptr [EDX + 0x94],EBX
LAB_006d56ee:
006D56EE  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006D56F1  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D56F4  51                        PUSH ECX
006D56F5  89 86 8C 02 00 00         MOV dword ptr [ESI + 0x28c],EAX
006D56FB  89 9E 90 02 00 00         MOV dword ptr [ESI + 0x290],EBX
006D5701  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006D5707  5F                        POP EDI
006D5708  5E                        POP ESI
006D5709  33 C0                     XOR EAX,EAX
006D570B  5B                        POP EBX
006D570C  8B E5                     MOV ESP,EBP
006D570E  5D                        POP EBP
006D570F  C2 04 00                  RET 0x4
