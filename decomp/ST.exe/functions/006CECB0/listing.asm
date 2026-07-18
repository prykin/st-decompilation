FUN_006cecb0:
006CECB0  55                        PUSH EBP
006CECB1  8B EC                     MOV EBP,ESP
006CECB3  81 EC 88 03 00 00         SUB ESP,0x388
006CECB9  56                        PUSH ESI
006CECBA  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006CECBD  57                        PUSH EDI
006CECBE  B9 1F 00 00 00            MOV ECX,0x1f
006CECC3  33 C0                     XOR EAX,EAX
006CECC5  8D BD 70 FF FF FF         LEA EDI,[EBP + 0xffffff70]
006CECCB  F3 AB                     STOSD.REP ES:EDI
006CECCD  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
006CECD0  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
006CECD3  89 85 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EAX
006CECD9  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006CECDC  F6 C4 02                  TEST AH,0x2
006CECDF  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006CECE6  C7 85 70 FF FF FF 7C 00 00 00  MOV dword ptr [EBP + 0xffffff70],0x7c
006CECF0  C7 85 74 FF FF FF 07 00 00 00  MOV dword ptr [EBP + 0xffffff74],0x7
006CECFA  89 8D 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],ECX
006CED00  C7 45 D8 40 00 00 00      MOV dword ptr [EBP + -0x28],0x40
006CED07  75 10                     JNZ 0x006ced19
006CED09  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006CED0C  85 C0                     TEST EAX,EAX
006CED0E  74 10                     JZ 0x006ced20
006CED10  F7 46 08 00 00 00 10      TEST dword ptr [ESI + 0x8],0x10000000
006CED17  74 07                     JZ 0x006ced20
LAB_006ced19:
006CED19  C7 45 D8 40 08 00 00      MOV dword ptr [EBP + -0x28],0x840
LAB_006ced20:
006CED20  8B 4E 20                  MOV ECX,dword ptr [ESI + 0x20]
006CED23  B8 08 00 00 00            MOV EAX,0x8
006CED28  3B C8                     CMP ECX,EAX
006CED2A  75 1B                     JNZ 0x006ced47
006CED2C  C7 85 74 FF FF FF 07 10 00 00  MOV dword ptr [EBP + 0xffffff74],0x1007
006CED36  C7 45 B8 20 00 00 00      MOV dword ptr [EBP + -0x48],0x20
006CED3D  C7 45 BC 60 00 00 00      MOV dword ptr [EBP + -0x44],0x60
006CED44  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
LAB_006ced47:
006CED47  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
006CED4A  8D 4D FC                  LEA ECX,[EBP + -0x4]
006CED4D  6A 00                     PUSH 0x0
006CED4F  51                        PUSH ECX
006CED50  8B 10                     MOV EDX,dword ptr [EAX]
006CED52  8D 8D 70 FF FF FF         LEA ECX,[EBP + 0xffffff70]
006CED58  51                        PUSH ECX
006CED59  50                        PUSH EAX
006CED5A  FF 52 18                  CALL dword ptr [EDX + 0x18]
006CED5D  8B F8                     MOV EDI,EAX
006CED5F  85 FF                     TEST EDI,EDI
006CED61  0F 85 9F 00 00 00         JNZ 0x006cee06
006CED67  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006CED6A  85 C0                     TEST EAX,EAX
006CED6C  74 7E                     JZ 0x006cedec
006CED6E  8B 46 40                  MOV EAX,dword ptr [ESI + 0x40]
006CED71  85 C0                     TEST EAX,EAX
006CED73  74 09                     JZ 0x006ced7e
006CED75  8B 10                     MOV EDX,dword ptr [EAX]
006CED77  50                        PUSH EAX
006CED78  FF 52 08                  CALL dword ptr [EDX + 0x8]
006CED7B  89 7E 40                  MOV dword ptr [ESI + 0x40],EDI
LAB_006ced7e:
006CED7E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006CED81  8D 55 EC                  LEA EDX,[EBP + -0x14]
006CED84  89 46 40                  MOV dword ptr [ESI + 0x40],EAX
006CED87  52                        PUSH EDX
006CED88  8B 08                     MOV ECX,dword ptr [EAX]
006CED8A  50                        PUSH EAX
006CED8B  FF 51 38                  CALL dword ptr [ECX + 0x38]
006CED8E  B8 7C 01 00 00            MOV EAX,0x17c
006CED93  8D 95 78 FC FF FF         LEA EDX,[EBP + 0xfffffc78]
006CED99  89 85 F4 FD FF FF         MOV dword ptr [EBP + 0xfffffdf4],EAX
006CED9F  89 85 78 FC FF FF         MOV dword ptr [EBP + 0xfffffc78],EAX
006CEDA5  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
006CEDA8  52                        PUSH EDX
006CEDA9  8D 95 F4 FD FF FF         LEA EDX,[EBP + 0xfffffdf4]
006CEDAF  8B 08                     MOV ECX,dword ptr [EAX]
006CEDB1  52                        PUSH EDX
006CEDB2  50                        PUSH EAX
006CEDB3  FF 51 2C                  CALL dword ptr [ECX + 0x2c]
006CEDB6  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006CEDB9  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006CEDBC  24 FD                     AND AL,0xfd
006CEDBE  F6 C5 40                  TEST CH,0x40
006CEDC1  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
006CEDC4  74 09                     JZ 0x006cedcf
006CEDC6  F6 85 F8 FD FF FF 40      TEST byte ptr [EBP + 0xfffffdf8],0x40
006CEDCD  75 0E                     JNZ 0x006ceddd
LAB_006cedcf:
006CEDCF  F6 C5 08                  TEST CH,0x8
006CEDD2  74 32                     JZ 0x006cee06
006CEDD4  F6 85 A0 FE FF FF 40      TEST byte ptr [EBP + 0xfffffea0],0x40
006CEDDB  74 29                     JZ 0x006cee06
LAB_006ceddd:
006CEDDD  0C 02                     OR AL,0x2
006CEDDF  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
006CEDE2  8B C7                     MOV EAX,EDI
006CEDE4  5F                        POP EDI
006CEDE5  5E                        POP ESI
006CEDE6  8B E5                     MOV ESP,EBP
006CEDE8  5D                        POP EBP
006CEDE9  C2 08 00                  RET 0x8
LAB_006cedec:
006CEDEC  8B 46 44                  MOV EAX,dword ptr [ESI + 0x44]
006CEDEF  85 C0                     TEST EAX,EAX
006CEDF1  74 0D                     JZ 0x006cee00
006CEDF3  8B 08                     MOV ECX,dword ptr [EAX]
006CEDF5  50                        PUSH EAX
006CEDF6  FF 51 08                  CALL dword ptr [ECX + 0x8]
006CEDF9  C7 46 44 00 00 00 00      MOV dword ptr [ESI + 0x44],0x0
LAB_006cee00:
006CEE00  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006CEE03  89 56 44                  MOV dword ptr [ESI + 0x44],EDX
LAB_006cee06:
006CEE06  8B C7                     MOV EAX,EDI
006CEE08  5F                        POP EDI
006CEE09  5E                        POP ESI
006CEE0A  8B E5                     MOV ESP,EBP
006CEE0C  5D                        POP EBP
006CEE0D  C2 08 00                  RET 0x8
