STAllPlayersC::GetGObjFromZone2:
0042ABE0  55                        PUSH EBP
0042ABE1  8B EC                     MOV EBP,ESP
0042ABE3  83 EC 50                  SUB ESP,0x50
0042ABE6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0042ABEB  53                        PUSH EBX
0042ABEC  56                        PUSH ESI
0042ABED  57                        PUSH EDI
0042ABEE  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0042ABF1  8D 4D B0                  LEA ECX,[EBP + -0x50]
0042ABF4  6A 00                     PUSH 0x0
0042ABF6  52                        PUSH EDX
0042ABF7  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
0042ABFA  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0042AC00  E8 EB 2B 30 00            CALL 0x0072d7f0
0042AC05  8B F0                     MOV ESI,EAX
0042AC07  83 C4 08                  ADD ESP,0x8
0042AC0A  85 F6                     TEST ESI,ESI
0042AC0C  0F 85 44 04 00 00         JNZ 0x0042b056
0042AC12  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
0042AC15  8B 7D 24                  MOV EDI,dword ptr [EBP + 0x24]
0042AC18  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
0042AC1B  85 F6                     TEST ESI,ESI
0042AC1D  75 61                     JNZ 0x0042ac80
0042AC1F  85 DB                     TEST EBX,EBX
0042AC21  75 5D                     JNZ 0x0042ac80
0042AC23  85 FF                     TEST EDI,EDI
0042AC25  75 59                     JNZ 0x0042ac80
0042AC27  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
0042AC2A  85 C0                     TEST EAX,EAX
0042AC2C  75 52                     JNZ 0x0042ac80
0042AC2E  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
0042AC31  85 C0                     TEST EAX,EAX
0042AC33  75 4B                     JNZ 0x0042ac80
0042AC35  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
0042AC38  85 C0                     TEST EAX,EAX
0042AC3A  75 44                     JNZ 0x0042ac80
0042AC3C  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
0042AC3F  85 C0                     TEST EAX,EAX
0042AC41  75 3D                     JNZ 0x0042ac80
0042AC43  8B 45 38                  MOV EAX,dword ptr [EBP + 0x38]
0042AC46  85 C0                     TEST EAX,EAX
0042AC48  75 36                     JNZ 0x0042ac80
0042AC4A  8B 45 3C                  MOV EAX,dword ptr [EBP + 0x3c]
0042AC4D  85 C0                     TEST EAX,EAX
0042AC4F  75 2F                     JNZ 0x0042ac80
0042AC51  8B 45 40                  MOV EAX,dword ptr [EBP + 0x40]
0042AC54  85 C0                     TEST EAX,EAX
0042AC56  75 28                     JNZ 0x0042ac80
0042AC58  8B 45 44                  MOV EAX,dword ptr [EBP + 0x44]
0042AC5B  85 C0                     TEST EAX,EAX
0042AC5D  75 21                     JNZ 0x0042ac80
0042AC5F  8B 45 48                  MOV EAX,dword ptr [EBP + 0x48]
0042AC62  85 C0                     TEST EAX,EAX
0042AC64  75 1A                     JNZ 0x0042ac80
0042AC66  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0042AC6B  68 B7 00 00 00            PUSH 0xb7
0042AC70  68 04 60 7A 00            PUSH 0x7a6004
0042AC75  50                        PUSH EAX
0042AC76  68 09 00 FE AF            PUSH 0xaffe0009
0042AC7B  E8 C0 B1 27 00            CALL 0x006a5e40
LAB_0042ac80:
0042AC80  85 F6                     TEST ESI,ESI
0042AC82  74 14                     JZ 0x0042ac98
0042AC84  83 3E 00                  CMP dword ptr [ESI],0x0
0042AC87  75 0F                     JNZ 0x0042ac98
0042AC89  6A 05                     PUSH 0x5
0042AC8B  6A 02                     PUSH 0x2
0042AC8D  6A 00                     PUSH 0x0
0042AC8F  6A 00                     PUSH 0x0
0042AC91  E8 FA 35 28 00            CALL 0x006ae290
0042AC96  89 06                     MOV dword ptr [ESI],EAX
LAB_0042ac98:
0042AC98  85 DB                     TEST EBX,EBX
0042AC9A  74 14                     JZ 0x0042acb0
0042AC9C  83 3B 00                  CMP dword ptr [EBX],0x0
0042AC9F  75 0F                     JNZ 0x0042acb0
0042ACA1  6A 05                     PUSH 0x5
0042ACA3  6A 02                     PUSH 0x2
0042ACA5  6A 00                     PUSH 0x0
0042ACA7  6A 00                     PUSH 0x0
0042ACA9  E8 E2 35 28 00            CALL 0x006ae290
0042ACAE  89 03                     MOV dword ptr [EBX],EAX
LAB_0042acb0:
0042ACB0  85 FF                     TEST EDI,EDI
0042ACB2  74 14                     JZ 0x0042acc8
0042ACB4  83 3F 00                  CMP dword ptr [EDI],0x0
0042ACB7  75 0F                     JNZ 0x0042acc8
0042ACB9  6A 05                     PUSH 0x5
0042ACBB  6A 02                     PUSH 0x2
0042ACBD  6A 00                     PUSH 0x0
0042ACBF  6A 00                     PUSH 0x0
0042ACC1  E8 CA 35 28 00            CALL 0x006ae290
0042ACC6  89 07                     MOV dword ptr [EDI],EAX
LAB_0042acc8:
0042ACC8  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
0042ACCB  85 C0                     TEST EAX,EAX
0042ACCD  74 17                     JZ 0x0042ace6
0042ACCF  83 38 00                  CMP dword ptr [EAX],0x0
0042ACD2  75 12                     JNZ 0x0042ace6
0042ACD4  6A 05                     PUSH 0x5
0042ACD6  6A 02                     PUSH 0x2
0042ACD8  6A 00                     PUSH 0x0
0042ACDA  6A 00                     PUSH 0x0
0042ACDC  E8 AF 35 28 00            CALL 0x006ae290
0042ACE1  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
0042ACE4  89 01                     MOV dword ptr [ECX],EAX
LAB_0042ace6:
0042ACE6  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
0042ACE9  85 C0                     TEST EAX,EAX
0042ACEB  74 17                     JZ 0x0042ad04
0042ACED  83 38 00                  CMP dword ptr [EAX],0x0
0042ACF0  75 12                     JNZ 0x0042ad04
0042ACF2  6A 05                     PUSH 0x5
0042ACF4  6A 02                     PUSH 0x2
0042ACF6  6A 00                     PUSH 0x0
0042ACF8  6A 00                     PUSH 0x0
0042ACFA  E8 91 35 28 00            CALL 0x006ae290
0042ACFF  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
0042AD02  89 02                     MOV dword ptr [EDX],EAX
LAB_0042ad04:
0042AD04  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
0042AD07  85 C0                     TEST EAX,EAX
0042AD09  74 17                     JZ 0x0042ad22
0042AD0B  83 38 00                  CMP dword ptr [EAX],0x0
0042AD0E  75 12                     JNZ 0x0042ad22
0042AD10  6A 05                     PUSH 0x5
0042AD12  6A 02                     PUSH 0x2
0042AD14  6A 00                     PUSH 0x0
0042AD16  6A 00                     PUSH 0x0
0042AD18  E8 73 35 28 00            CALL 0x006ae290
0042AD1D  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
0042AD20  89 01                     MOV dword ptr [ECX],EAX
LAB_0042ad22:
0042AD22  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
0042AD25  85 C0                     TEST EAX,EAX
0042AD27  74 17                     JZ 0x0042ad40
0042AD29  83 38 00                  CMP dword ptr [EAX],0x0
0042AD2C  75 12                     JNZ 0x0042ad40
0042AD2E  6A 05                     PUSH 0x5
0042AD30  6A 02                     PUSH 0x2
0042AD32  6A 00                     PUSH 0x0
0042AD34  6A 00                     PUSH 0x0
0042AD36  E8 55 35 28 00            CALL 0x006ae290
0042AD3B  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
0042AD3E  89 02                     MOV dword ptr [EDX],EAX
LAB_0042ad40:
0042AD40  8B 45 38                  MOV EAX,dword ptr [EBP + 0x38]
0042AD43  85 C0                     TEST EAX,EAX
0042AD45  74 17                     JZ 0x0042ad5e
0042AD47  83 38 00                  CMP dword ptr [EAX],0x0
0042AD4A  75 12                     JNZ 0x0042ad5e
0042AD4C  6A 05                     PUSH 0x5
0042AD4E  6A 02                     PUSH 0x2
0042AD50  6A 00                     PUSH 0x0
0042AD52  6A 00                     PUSH 0x0
0042AD54  E8 37 35 28 00            CALL 0x006ae290
0042AD59  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
0042AD5C  89 01                     MOV dword ptr [ECX],EAX
LAB_0042ad5e:
0042AD5E  8B 45 3C                  MOV EAX,dword ptr [EBP + 0x3c]
0042AD61  85 C0                     TEST EAX,EAX
0042AD63  74 17                     JZ 0x0042ad7c
0042AD65  83 38 00                  CMP dword ptr [EAX],0x0
0042AD68  75 12                     JNZ 0x0042ad7c
0042AD6A  6A 05                     PUSH 0x5
0042AD6C  6A 02                     PUSH 0x2
0042AD6E  6A 00                     PUSH 0x0
0042AD70  6A 00                     PUSH 0x0
0042AD72  E8 19 35 28 00            CALL 0x006ae290
0042AD77  8B 55 3C                  MOV EDX,dword ptr [EBP + 0x3c]
0042AD7A  89 02                     MOV dword ptr [EDX],EAX
LAB_0042ad7c:
0042AD7C  8B 45 40                  MOV EAX,dword ptr [EBP + 0x40]
0042AD7F  85 C0                     TEST EAX,EAX
0042AD81  74 17                     JZ 0x0042ad9a
0042AD83  83 38 00                  CMP dword ptr [EAX],0x0
0042AD86  75 12                     JNZ 0x0042ad9a
0042AD88  6A 05                     PUSH 0x5
0042AD8A  6A 02                     PUSH 0x2
0042AD8C  6A 00                     PUSH 0x0
0042AD8E  6A 00                     PUSH 0x0
0042AD90  E8 FB 34 28 00            CALL 0x006ae290
0042AD95  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
0042AD98  89 01                     MOV dword ptr [ECX],EAX
LAB_0042ad9a:
0042AD9A  8B 45 44                  MOV EAX,dword ptr [EBP + 0x44]
0042AD9D  85 C0                     TEST EAX,EAX
0042AD9F  74 17                     JZ 0x0042adb8
0042ADA1  83 38 00                  CMP dword ptr [EAX],0x0
0042ADA4  75 12                     JNZ 0x0042adb8
0042ADA6  6A 05                     PUSH 0x5
0042ADA8  6A 02                     PUSH 0x2
0042ADAA  6A 00                     PUSH 0x0
0042ADAC  6A 00                     PUSH 0x0
0042ADAE  E8 DD 34 28 00            CALL 0x006ae290
0042ADB3  8B 55 44                  MOV EDX,dword ptr [EBP + 0x44]
0042ADB6  89 02                     MOV dword ptr [EDX],EAX
LAB_0042adb8:
0042ADB8  8B 45 48                  MOV EAX,dword ptr [EBP + 0x48]
0042ADBB  85 C0                     TEST EAX,EAX
0042ADBD  74 17                     JZ 0x0042add6
0042ADBF  83 38 00                  CMP dword ptr [EAX],0x0
0042ADC2  75 12                     JNZ 0x0042add6
0042ADC4  6A 05                     PUSH 0x5
0042ADC6  6A 02                     PUSH 0x2
0042ADC8  6A 00                     PUSH 0x0
0042ADCA  6A 00                     PUSH 0x0
0042ADCC  E8 BF 34 28 00            CALL 0x006ae290
0042ADD1  8B 4D 48                  MOV ECX,dword ptr [EBP + 0x48]
0042ADD4  89 01                     MOV dword ptr [ECX],EAX
LAB_0042add6:
0042ADD6  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0042ADD9  8D 55 FC                  LEA EDX,[EBP + -0x4]
0042ADDC  8D 45 F8                  LEA EAX,[EBP + -0x8]
0042ADDF  52                        PUSH EDX
0042ADE0  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0042ADE3  50                        PUSH EAX
0042ADE4  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0042ADE7  51                        PUSH ECX
0042ADE8  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0042ADEB  52                        PUSH EDX
0042ADEC  50                        PUSH EAX
0042ADED  51                        PUSH ECX
0042ADEE  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0042ADF4  E8 97 FF 2B 00            CALL 0x006ead90
0042ADF9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0042ADFC  33 DB                     XOR EBX,EBX
0042ADFE  3B C3                     CMP EAX,EBX
0042AE00  0F 8E 3F 02 00 00         JLE 0x0042b045
0042AE06  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
LAB_0042ae09:
0042AE09  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0042AE0C  8B 74 0B 04               MOV ESI,dword ptr [EBX + ECX*0x1 + 0x4]
0042AE10  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
0042AE13  3D A4 01 00 00            CMP EAX,0x1a4
0042AE18  0F 87 0D 01 00 00         JA 0x0042af2b
0042AE1E  0F 84 DD 00 00 00         JZ 0x0042af01
0042AE24  83 F8 14                  CMP EAX,0x14
0042AE27  74 78                     JZ 0x0042aea1
0042AE29  83 F8 5A                  CMP EAX,0x5a
0042AE2C  74 35                     JZ 0x0042ae63
0042AE2E  3D 72 01 00 00            CMP EAX,0x172
0042AE33  0F 85 EE 01 00 00         JNZ 0x0042b027
0042AE39  8B 45 40                  MOV EAX,dword ptr [EBP + 0x40]
0042AE3C  85 C0                     TEST EAX,EAX
0042AE3E  0F 84 E3 01 00 00         JZ 0x0042b027
0042AE44  8B 16                     MOV EDX,dword ptr [ESI]
0042AE46  8B CE                     MOV ECX,ESI
0042AE48  FF 92 EC 00 00 00         CALL dword ptr [EDX + 0xec]
0042AE4E  83 F8 01                  CMP EAX,0x1
0042AE51  0F 85 D0 01 00 00         JNZ 0x0042b027
0042AE57  8B 45 40                  MOV EAX,dword ptr [EBP + 0x40]
0042AE5A  83 C6 32                  ADD ESI,0x32
0042AE5D  56                        PUSH ESI
0042AE5E  E9 BC 01 00 00            JMP 0x0042b01f
LAB_0042ae63:
0042AE63  8B 45 3C                  MOV EAX,dword ptr [EBP + 0x3c]
0042AE66  85 C0                     TEST EAX,EAX
0042AE68  0F 84 B9 01 00 00         JZ 0x0042b027
0042AE6E  8B 14 0B                  MOV EDX,dword ptr [EBX + ECX*0x1]
0042AE71  8B 86 ED 01 00 00         MOV EAX,dword ptr [ESI + 0x1ed]
0042AE77  3B D0                     CMP EDX,EAX
0042AE79  0F 85 A8 01 00 00         JNZ 0x0042b027
0042AE7F  8B 06                     MOV EAX,dword ptr [ESI]
0042AE81  8B CE                     MOV ECX,ESI
0042AE83  FF 90 EC 00 00 00         CALL dword ptr [EAX + 0xec]
0042AE89  83 F8 01                  CMP EAX,0x1
0042AE8C  0F 85 95 01 00 00         JNZ 0x0042b027
0042AE92  8B 4D 3C                  MOV ECX,dword ptr [EBP + 0x3c]
0042AE95  83 C6 32                  ADD ESI,0x32
0042AE98  56                        PUSH ESI
0042AE99  8B 11                     MOV EDX,dword ptr [ECX]
0042AE9B  52                        PUSH EDX
0042AE9C  E9 81 01 00 00            JMP 0x0042b022
LAB_0042aea1:
0042AEA1  8B 06                     MOV EAX,dword ptr [ESI]
0042AEA3  8B CE                     MOV ECX,ESI
0042AEA5  FF 90 EC 00 00 00         CALL dword ptr [EAX + 0xec]
0042AEAB  83 F8 01                  CMP EAX,0x1
0042AEAE  0F 85 73 01 00 00         JNZ 0x0042b027
0042AEB4  0F BE 4D 08               MOVSX ECX,byte ptr [EBP + 0x8]
0042AEB8  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0042AEBB  8D 7E 24                  LEA EDI,[ESI + 0x24]
0042AEBE  3B C1                     CMP EAX,ECX
0042AEC0  75 19                     JNZ 0x0042aedb
0042AEC2  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0042AEC5  85 C0                     TEST EAX,EAX
0042AEC7  0F 84 5A 01 00 00         JZ 0x0042b027
0042AECD  8B D0                     MOV EDX,EAX
0042AECF  83 C6 32                  ADD ESI,0x32
0042AED2  56                        PUSH ESI
0042AED3  8B 02                     MOV EAX,dword ptr [EDX]
0042AED5  50                        PUSH EAX
0042AED6  E9 47 01 00 00            JMP 0x0042b022
LAB_0042aedb:
0042AEDB  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0042AEDE  85 C0                     TEST EAX,EAX
0042AEE0  74 0E                     JZ 0x0042aef0
0042AEE2  8B C8                     MOV ECX,EAX
0042AEE4  83 C6 32                  ADD ESI,0x32
0042AEE7  56                        PUSH ESI
0042AEE8  8B 11                     MOV EDX,dword ptr [ECX]
0042AEEA  52                        PUSH EDX
0042AEEB  E8 D0 32 28 00            CALL 0x006ae1c0
LAB_0042aef0:
0042AEF0  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
0042AEF3  85 C0                     TEST EAX,EAX
0042AEF5  0F 84 2C 01 00 00         JZ 0x0042b027
0042AEFB  57                        PUSH EDI
0042AEFC  E9 1E 01 00 00            JMP 0x0042b01f
LAB_0042af01:
0042AF01  8B 45 44                  MOV EAX,dword ptr [EBP + 0x44]
0042AF04  85 C0                     TEST EAX,EAX
0042AF06  0F 84 1B 01 00 00         JZ 0x0042b027
0042AF0C  8B 16                     MOV EDX,dword ptr [ESI]
0042AF0E  8B CE                     MOV ECX,ESI
0042AF10  FF 92 EC 00 00 00         CALL dword ptr [EDX + 0xec]
0042AF16  83 F8 01                  CMP EAX,0x1
0042AF19  0F 85 08 01 00 00         JNZ 0x0042b027
0042AF1F  8B 45 44                  MOV EAX,dword ptr [EBP + 0x44]
0042AF22  83 C6 32                  ADD ESI,0x32
0042AF25  56                        PUSH ESI
0042AF26  E9 F4 00 00 00            JMP 0x0042b01f
LAB_0042af2b:
0042AF2B  3D B8 01 00 00            CMP EAX,0x1b8
0042AF30  0F 87 8F 00 00 00         JA 0x0042afc5
0042AF36  74 6B                     JZ 0x0042afa3
0042AF38  3D AE 01 00 00            CMP EAX,0x1ae
0042AF3D  0F 85 E4 00 00 00         JNZ 0x0042b027
0042AF43  0F BE 55 08               MOVSX EDX,byte ptr [EBP + 0x8]
0042AF47  39 56 24                  CMP dword ptr [ESI + 0x24],EDX
0042AF4A  75 2D                     JNZ 0x0042af79
0042AF4C  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
0042AF4F  85 C0                     TEST EAX,EAX
0042AF51  0F 84 D0 00 00 00         JZ 0x0042b027
0042AF57  8B 06                     MOV EAX,dword ptr [ESI]
0042AF59  8B CE                     MOV ECX,ESI
0042AF5B  FF 90 EC 00 00 00         CALL dword ptr [EAX + 0xec]
0042AF61  83 F8 01                  CMP EAX,0x1
0042AF64  0F 85 BD 00 00 00         JNZ 0x0042b027
0042AF6A  8B 4D 34                  MOV ECX,dword ptr [EBP + 0x34]
0042AF6D  83 C6 32                  ADD ESI,0x32
0042AF70  56                        PUSH ESI
0042AF71  8B 11                     MOV EDX,dword ptr [ECX]
0042AF73  52                        PUSH EDX
0042AF74  E9 A9 00 00 00            JMP 0x0042b022
LAB_0042af79:
0042AF79  8B 45 38                  MOV EAX,dword ptr [EBP + 0x38]
0042AF7C  85 C0                     TEST EAX,EAX
0042AF7E  0F 84 A3 00 00 00         JZ 0x0042b027
0042AF84  8B 06                     MOV EAX,dword ptr [ESI]
0042AF86  8B CE                     MOV ECX,ESI
0042AF88  FF 90 EC 00 00 00         CALL dword ptr [EAX + 0xec]
0042AF8E  83 F8 01                  CMP EAX,0x1
0042AF91  0F 85 90 00 00 00         JNZ 0x0042b027
0042AF97  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
0042AF9A  83 C6 32                  ADD ESI,0x32
0042AF9D  56                        PUSH ESI
0042AF9E  8B 11                     MOV EDX,dword ptr [ECX]
0042AFA0  52                        PUSH EDX
0042AFA1  EB 7F                     JMP 0x0042b022
LAB_0042afa3:
0042AFA3  8B 45 48                  MOV EAX,dword ptr [EBP + 0x48]
0042AFA6  85 C0                     TEST EAX,EAX
0042AFA8  74 7D                     JZ 0x0042b027
0042AFAA  8B 06                     MOV EAX,dword ptr [ESI]
0042AFAC  8B CE                     MOV ECX,ESI
0042AFAE  FF 90 EC 00 00 00         CALL dword ptr [EAX + 0xec]
0042AFB4  83 F8 01                  CMP EAX,0x1
0042AFB7  75 6E                     JNZ 0x0042b027
0042AFB9  8B 4D 48                  MOV ECX,dword ptr [EBP + 0x48]
0042AFBC  83 C6 32                  ADD ESI,0x32
0042AFBF  56                        PUSH ESI
0042AFC0  8B 11                     MOV EDX,dword ptr [ECX]
0042AFC2  52                        PUSH EDX
0042AFC3  EB 5D                     JMP 0x0042b022
LAB_0042afc5:
0042AFC5  3D E8 03 00 00            CMP EAX,0x3e8
0042AFCA  72 5B                     JC 0x0042b027
0042AFCC  3D E9 03 00 00            CMP EAX,0x3e9
0042AFD1  77 54                     JA 0x0042b027
0042AFD3  8B 06                     MOV EAX,dword ptr [ESI]
0042AFD5  8B CE                     MOV ECX,ESI
0042AFD7  FF 90 EC 00 00 00         CALL dword ptr [EAX + 0xec]
0042AFDD  83 F8 01                  CMP EAX,0x1
0042AFE0  75 45                     JNZ 0x0042b027
0042AFE2  0F BE 4D 08               MOVSX ECX,byte ptr [EBP + 0x8]
0042AFE6  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0042AFE9  8D 7E 24                  LEA EDI,[ESI + 0x24]
0042AFEC  3B C1                     CMP EAX,ECX
0042AFEE  75 12                     JNZ 0x0042b002
0042AFF0  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
0042AFF3  85 C0                     TEST EAX,EAX
0042AFF5  74 30                     JZ 0x0042b027
0042AFF7  8B D0                     MOV EDX,EAX
0042AFF9  83 C6 32                  ADD ESI,0x32
0042AFFC  56                        PUSH ESI
0042AFFD  8B 02                     MOV EAX,dword ptr [EDX]
0042AFFF  50                        PUSH EAX
0042B000  EB 20                     JMP 0x0042b022
LAB_0042b002:
0042B002  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
0042B005  85 C0                     TEST EAX,EAX
0042B007  74 0E                     JZ 0x0042b017
0042B009  8B C8                     MOV ECX,EAX
0042B00B  83 C6 32                  ADD ESI,0x32
0042B00E  56                        PUSH ESI
0042B00F  8B 11                     MOV EDX,dword ptr [ECX]
0042B011  52                        PUSH EDX
0042B012  E8 A9 31 28 00            CALL 0x006ae1c0
LAB_0042b017:
0042B017  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
0042B01A  85 C0                     TEST EAX,EAX
0042B01C  74 09                     JZ 0x0042b027
0042B01E  57                        PUSH EDI
LAB_0042b01f:
0042B01F  8B 08                     MOV ECX,dword ptr [EAX]
0042B021  51                        PUSH ECX
LAB_0042b022:
0042B022  E8 99 31 28 00            CALL 0x006ae1c0
LAB_0042b027:
0042B027  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0042B02A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0042B02D  40                        INC EAX
0042B02E  83 C3 14                  ADD EBX,0x14
0042B031  3B C1                     CMP EAX,ECX
0042B033  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0042B036  0F 8C CD FD FF FF         JL 0x0042ae09
0042B03C  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0042B03F  52                        PUSH EDX
0042B040  E8 4B AE 27 00            CALL 0x006a5e90
LAB_0042b045:
0042B045  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0042B048  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0042B04D  5F                        POP EDI
0042B04E  5E                        POP ESI
0042B04F  5B                        POP EBX
0042B050  8B E5                     MOV ESP,EBP
0042B052  5D                        POP EBP
0042B053  C2 44 00                  RET 0x44
LAB_0042b056:
0042B056  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
0042B059  81 FE 09 00 FE AF         CMP ESI,0xaffe0009
0042B05F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0042B065  74 36                     JZ 0x0042b09d
0042B067  68 50 60 7A 00            PUSH 0x7a6050
0042B06C  68 CC 4C 7A 00            PUSH 0x7a4ccc
0042B071  56                        PUSH ESI
0042B072  6A 00                     PUSH 0x0
0042B074  68 0E 01 00 00            PUSH 0x10e
0042B079  68 04 60 7A 00            PUSH 0x7a6004
0042B07E  E8 4D 24 28 00            CALL 0x006ad4d0
0042B083  83 C4 18                  ADD ESP,0x18
0042B086  85 C0                     TEST EAX,EAX
0042B088  74 01                     JZ 0x0042b08b
0042B08A  CC                        INT3
LAB_0042b08b:
0042B08B  68 0F 01 00 00            PUSH 0x10f
0042B090  68 04 60 7A 00            PUSH 0x7a6004
0042B095  6A 00                     PUSH 0x0
0042B097  56                        PUSH ESI
0042B098  E8 A3 AD 27 00            CALL 0x006a5e40
LAB_0042b09d:
0042B09D  5F                        POP EDI
0042B09E  5E                        POP ESI
0042B09F  5B                        POP EBX
0042B0A0  8B E5                     MOV ESP,EBP
0042B0A2  5D                        POP EBP
0042B0A3  C2 44 00                  RET 0x44
