FUN_0059c9f0:
0059C9F0  55                        PUSH EBP
0059C9F1  8B EC                     MOV EBP,ESP
0059C9F3  81 EC D4 08 00 00         SUB ESP,0x8d4
0059C9F9  56                        PUSH ESI
0059C9FA  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0059C9FD  57                        PUSH EDI
0059C9FE  B9 23 02 00 00            MOV ECX,0x223
0059CA03  33 C0                     XOR EAX,EAX
0059CA05  8D BD 2C F7 FF FF         LEA EDI,[EBP + 0xfffff72c]
0059CA0B  F3 AB                     STOSD.REP ES:EDI
0059CA0D  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0059CA12  8D 55 BC                  LEA EDX,[EBP + -0x44]
0059CA15  8D 4D B8                  LEA ECX,[EBP + -0x48]
0059CA18  6A 00                     PUSH 0x0
0059CA1A  52                        PUSH EDX
0059CA1B  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0059CA1E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0059CA24  E8 C7 0D 19 00            CALL 0x0072d7f0
0059CA29  8B F0                     MOV ESI,EAX
0059CA2B  83 C4 08                  ADD ESP,0x8
0059CA2E  85 F6                     TEST ESI,ESI
0059CA30  0F 85 63 03 00 00         JNZ 0x0059cd99
0059CA36  6A 01                     PUSH 0x1
0059CA38  6A 01                     PUSH 0x1
0059CA3A  50                        PUSH EAX
0059CA3B  E8 B0 8A 11 00            CALL 0x006b54f0
0059CA40  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0059CA43  68 1D 7E 80 00            PUSH 0x807e1d
0059CA48  50                        PUSH EAX
0059CA49  89 86 E8 1A 00 00         MOV dword ptr [ESI + 0x1ae8],EAX
0059CA4F  E8 4C 90 11 00            CALL 0x006b5aa0
0059CA54  6A 01                     PUSH 0x1
0059CA56  6A 01                     PUSH 0x1
0059CA58  6A 00                     PUSH 0x0
0059CA5A  E8 91 8A 11 00            CALL 0x006b54f0
0059CA5F  68 A0 16 80 00            PUSH 0x8016a0
0059CA64  50                        PUSH EAX
0059CA65  89 86 EC 1A 00 00         MOV dword ptr [ESI + 0x1aec],EAX
0059CA6B  E8 30 90 11 00            CALL 0x006b5aa0
0059CA70  6A 01                     PUSH 0x1
0059CA72  6A 01                     PUSH 0x1
0059CA74  6A 00                     PUSH 0x0
0059CA76  E8 75 8A 11 00            CALL 0x006b54f0
0059CA7B  68 A0 16 80 00            PUSH 0x8016a0
0059CA80  50                        PUSH EAX
0059CA81  89 86 F0 1A 00 00         MOV dword ptr [ESI + 0x1af0],EAX
0059CA87  E8 14 90 11 00            CALL 0x006b5aa0
0059CA8C  6A 01                     PUSH 0x1
0059CA8E  6A 01                     PUSH 0x1
0059CA90  6A 00                     PUSH 0x0
0059CA92  E8 59 8A 11 00            CALL 0x006b54f0
0059CA97  68 A0 16 80 00            PUSH 0x8016a0
0059CA9C  50                        PUSH EAX
0059CA9D  89 86 F8 1A 00 00         MOV dword ptr [ESI + 0x1af8],EAX
0059CAA3  E8 F8 8F 11 00            CALL 0x006b5aa0
0059CAA8  6A 01                     PUSH 0x1
0059CAAA  6A 01                     PUSH 0x1
0059CAAC  6A 00                     PUSH 0x0
0059CAAE  E8 3D 8A 11 00            CALL 0x006b54f0
0059CAB3  68 A0 16 80 00            PUSH 0x8016a0
0059CAB8  50                        PUSH EAX
0059CAB9  89 86 FC 1A 00 00         MOV dword ptr [ESI + 0x1afc],EAX
0059CABF  E8 DC 8F 11 00            CALL 0x006b5aa0
0059CAC4  6A 01                     PUSH 0x1
0059CAC6  6A 01                     PUSH 0x1
0059CAC8  6A 00                     PUSH 0x0
0059CACA  E8 21 8A 11 00            CALL 0x006b54f0
0059CACF  68 A0 16 80 00            PUSH 0x8016a0
0059CAD4  50                        PUSH EAX
0059CAD5  89 86 00 1B 00 00         MOV dword ptr [ESI + 0x1b00],EAX
0059CADB  E8 C0 8F 11 00            CALL 0x006b5aa0
0059CAE0  6A 01                     PUSH 0x1
0059CAE2  6A 01                     PUSH 0x1
0059CAE4  6A 00                     PUSH 0x0
0059CAE6  E8 05 8A 11 00            CALL 0x006b54f0
0059CAEB  68 A0 16 80 00            PUSH 0x8016a0
0059CAF0  50                        PUSH EAX
0059CAF1  89 86 04 1B 00 00         MOV dword ptr [ESI + 0x1b04],EAX
0059CAF7  E8 A4 8F 11 00            CALL 0x006b5aa0
0059CAFC  B9 23 02 00 00            MOV ECX,0x223
0059CB01  33 C0                     XOR EAX,EAX
0059CB03  8D BD 2C F7 FF FF         LEA EDI,[EBP + 0xfffff72c]
0059CB09  F3 AB                     STOSD.REP ES:EDI
0059CB0B  8B 86 73 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a73]
0059CB11  8B 8E E8 1A 00 00         MOV ECX,dword ptr [ESI + 0x1ae8]
0059CB17  89 85 34 F7 FF FF         MOV dword ptr [EBP + 0xfffff734],EAX
0059CB1D  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
0059CB20  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
0059CB23  89 85 58 F7 FF FF         MOV dword ptr [EBP + 0xfffff758],EAX
0059CB29  89 85 78 F7 FF FF         MOV dword ptr [EBP + 0xfffff778],EAX
0059CB2F  BF D2 00 00 00            MOV EDI,0xd2
0059CB34  B8 02 00 00 00            MOV EAX,0x2
0059CB39  C7 85 2C F7 FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffff72c],0x1
0059CB43  C7 85 30 F7 FF FF 89 00 00 00  MOV dword ptr [EBP + 0xfffff730],0x89
0059CB4D  89 BD 38 F7 FF FF         MOV dword ptr [EBP + 0xfffff738],EDI
0059CB53  C7 85 3C F7 FF FF D9 00 00 00  MOV dword ptr [EBP + 0xfffff73c],0xd9
0059CB5D  C7 85 40 F7 FF FF 7C 01 00 00  MOV dword ptr [EBP + 0xfffff740],0x17c
0059CB67  C7 85 44 F7 FF FF 19 00 00 00  MOV dword ptr [EBP + 0xfffff744],0x19
0059CB71  C7 85 48 F7 FF FF 10 00 00 00  MOV dword ptr [EBP + 0xfffff748],0x10
0059CB7B  89 8D 4C F7 FF FF         MOV dword ptr [EBP + 0xfffff74c],ECX
0059CB81  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
0059CB84  89 85 5C F7 FF FF         MOV dword ptr [EBP + 0xfffff75c],EAX
0059CB8A  89 85 7C F7 FF FF         MOV dword ptr [EBP + 0xfffff77c],EAX
0059CB90  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0059CB93  8D 85 2C F7 FF FF         LEA EAX,[EBP + 0xfffff72c]
0059CB99  6A 00                     PUSH 0x0
0059CB9B  50                        PUSH EAX
0059CB9C  8D 86 C4 1A 00 00         LEA EAX,[ESI + 0x1ac4]
0059CBA2  C7 85 60 F7 FF FF FF 68 00 00  MOV dword ptr [EBP + 0xfffff760],0x68ff
0059CBAC  C7 85 80 F7 FF FF 7F 69 00 00  MOV dword ptr [EBP + 0xfffff780],0x697f
0059CBB6  C7 45 A4 55 69 00 00      MOV dword ptr [EBP + -0x5c],0x6955
0059CBBD  8B 11                     MOV EDX,dword ptr [ECX]
0059CBBF  6A 00                     PUSH 0x0
0059CBC1  50                        PUSH EAX
0059CBC2  6A 06                     PUSH 0x6
0059CBC4  FF 52 08                  CALL dword ptr [EDX + 0x8]
0059CBC7  8B 8E EC 1A 00 00         MOV ECX,dword ptr [ESI + 0x1aec]
0059CBCD  8D 85 2C F7 FF FF         LEA EAX,[EBP + 0xfffff72c]
0059CBD3  89 8D 4C F7 FF FF         MOV dword ptr [EBP + 0xfffff74c],ECX
0059CBD9  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0059CBDC  6A 00                     PUSH 0x0
0059CBDE  50                        PUSH EAX
0059CBDF  8D 86 C8 1A 00 00         LEA EAX,[ESI + 0x1ac8]
0059CBE5  C7 85 30 F7 FF FF A9 00 00 00  MOV dword ptr [EBP + 0xfffff730],0xa9
0059CBEF  C7 85 3C F7 FF FF 06 01 00 00  MOV dword ptr [EBP + 0xfffff73c],0x106
0059CBF9  C7 85 40 F7 FF FF AA 00 00 00  MOV dword ptr [EBP + 0xfffff740],0xaa
0059CC03  C7 85 44 F7 FF FF 14 00 00 00  MOV dword ptr [EBP + 0xfffff744],0x14
0059CC0D  C7 85 48 F7 FF FF 10 00 00 00  MOV dword ptr [EBP + 0xfffff748],0x10
0059CC17  8B 11                     MOV EDX,dword ptr [ECX]
0059CC19  6A 00                     PUSH 0x0
0059CC1B  50                        PUSH EAX
0059CC1C  6A 06                     PUSH 0x6
0059CC1E  FF 52 08                  CALL dword ptr [EDX + 0x8]
0059CC21  8B 8E F0 1A 00 00         MOV ECX,dword ptr [ESI + 0x1af0]
0059CC27  8D 85 2C F7 FF FF         LEA EAX,[EBP + 0xfffff72c]
0059CC2D  89 8D 4C F7 FF FF         MOV dword ptr [EBP + 0xfffff74c],ECX
0059CC33  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0059CC36  6A 00                     PUSH 0x0
0059CC38  50                        PUSH EAX
0059CC39  8D 86 CC 1A 00 00         LEA EAX,[ESI + 0x1acc]
0059CC3F  C7 85 38 F7 FF FF A4 01 00 00  MOV dword ptr [EBP + 0xfffff738],0x1a4
0059CC49  8B 11                     MOV EDX,dword ptr [ECX]
0059CC4B  6A 00                     PUSH 0x0
0059CC4D  50                        PUSH EAX
0059CC4E  6A 06                     PUSH 0x6
0059CC50  FF 52 08                  CALL dword ptr [EDX + 0x8]
0059CC53  8B 8E F8 1A 00 00         MOV ECX,dword ptr [ESI + 0x1af8]
0059CC59  8D 85 2C F7 FF FF         LEA EAX,[EBP + 0xfffff72c]
0059CC5F  89 8D 4C F7 FF FF         MOV dword ptr [EBP + 0xfffff74c],ECX
0059CC65  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0059CC68  6A 00                     PUSH 0x0
0059CC6A  50                        PUSH EAX
0059CC6B  8D 86 D8 1A 00 00         LEA EAX,[ESI + 0x1ad8]
0059CC71  C7 85 30 F7 FF FF 89 00 00 00  MOV dword ptr [EBP + 0xfffff730],0x89
0059CC7B  89 BD 38 F7 FF FF         MOV dword ptr [EBP + 0xfffff738],EDI
0059CC81  C7 85 3C F7 FF FF 2E 01 00 00  MOV dword ptr [EBP + 0xfffff73c],0x12e
0059CC8B  C7 85 40 F7 FF FF 64 00 00 00  MOV dword ptr [EBP + 0xfffff740],0x64
0059CC95  C7 85 48 F7 FF FF FF 01 00 00  MOV dword ptr [EBP + 0xfffff748],0x1ff
0059CC9F  8B 11                     MOV EDX,dword ptr [ECX]
0059CCA1  6A 00                     PUSH 0x0
0059CCA3  50                        PUSH EAX
0059CCA4  6A 06                     PUSH 0x6
0059CCA6  FF 52 08                  CALL dword ptr [EDX + 0x8]
0059CCA9  8B 8E FC 1A 00 00         MOV ECX,dword ptr [ESI + 0x1afc]
0059CCAF  8D 85 2C F7 FF FF         LEA EAX,[EBP + 0xfffff72c]
0059CCB5  89 8D 4C F7 FF FF         MOV dword ptr [EBP + 0xfffff74c],ECX
0059CCBB  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0059CCBE  6A 00                     PUSH 0x0
0059CCC0  50                        PUSH EAX
0059CCC1  8D 86 DC 1A 00 00         LEA EAX,[ESI + 0x1adc]
0059CCC7  C7 85 38 F7 FF FF 5E 01 00 00  MOV dword ptr [EBP + 0xfffff738],0x15e
0059CCD1  8B 11                     MOV EDX,dword ptr [ECX]
0059CCD3  6A 00                     PUSH 0x0
0059CCD5  50                        PUSH EAX
0059CCD6  6A 06                     PUSH 0x6
0059CCD8  FF 52 08                  CALL dword ptr [EDX + 0x8]
0059CCDB  8B 8E 00 1B 00 00         MOV ECX,dword ptr [ESI + 0x1b00]
0059CCE1  8D 85 2C F7 FF FF         LEA EAX,[EBP + 0xfffff72c]
0059CCE7  89 8D 4C F7 FF FF         MOV dword ptr [EBP + 0xfffff74c],ECX
0059CCED  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0059CCF0  C7 85 38 F7 FF FF EA 01 00 00  MOV dword ptr [EBP + 0xfffff738],0x1ea
0059CCFA  6A 00                     PUSH 0x0
0059CCFC  8B 11                     MOV EDX,dword ptr [ECX]
0059CCFE  50                        PUSH EAX
0059CCFF  8D 86 E0 1A 00 00         LEA EAX,[ESI + 0x1ae0]
0059CD05  6A 00                     PUSH 0x0
0059CD07  50                        PUSH EAX
0059CD08  6A 06                     PUSH 0x6
0059CD0A  FF 52 08                  CALL dword ptr [EDX + 0x8]
0059CD0D  8B 8E 04 1B 00 00         MOV ECX,dword ptr [ESI + 0x1b04]
0059CD13  8D 85 2C F7 FF FF         LEA EAX,[EBP + 0xfffff72c]
0059CD19  89 8D 4C F7 FF FF         MOV dword ptr [EBP + 0xfffff74c],ECX
0059CD1F  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0059CD22  6A 00                     PUSH 0x0
0059CD24  50                        PUSH EAX
0059CD25  8D 86 E4 1A 00 00         LEA EAX,[ESI + 0x1ae4]
0059CD2B  C7 85 30 F7 FF FF C8 00 00 00  MOV dword ptr [EBP + 0xfffff730],0xc8
0059CD35  89 BD 38 F7 FF FF         MOV dword ptr [EBP + 0xfffff738],EDI
0059CD3B  C7 85 3C F7 FF FF 56 01 00 00  MOV dword ptr [EBP + 0xfffff73c],0x156
0059CD45  C7 85 40 F7 FF FF 7C 01 00 00  MOV dword ptr [EBP + 0xfffff740],0x17c
0059CD4F  C7 85 44 F7 FF FF 4B 00 00 00  MOV dword ptr [EBP + 0xfffff744],0x4b
0059CD59  C7 85 80 F7 FF FF 81 69 00 00  MOV dword ptr [EBP + 0xfffff780],0x6981
0059CD63  8B 11                     MOV EDX,dword ptr [ECX]
0059CD65  6A 00                     PUSH 0x0
0059CD67  50                        PUSH EAX
0059CD68  6A 06                     PUSH 0x6
0059CD6A  FF 52 08                  CALL dword ptr [EDX + 0x8]
0059CD6D  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
0059CD70  C7 46 2D 61 00 00 00      MOV dword ptr [ESI + 0x2d],0x61
0059CD77  51                        PUSH ECX
0059CD78  6A 00                     PUSH 0x0
0059CD7A  6A 0F                     PUSH 0xf
0059CD7C  8B CE                     MOV ECX,ESI
0059CD7E  C7 46 35 00 00 00 00      MOV dword ptr [ESI + 0x35],0x0
0059CD85  E8 F6 92 14 00            CALL 0x006e6080
0059CD8A  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0059CD8D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0059CD93  5F                        POP EDI
0059CD94  5E                        POP ESI
0059CD95  8B E5                     MOV ESP,EBP
0059CD97  5D                        POP EBP
0059CD98  C3                        RET
LAB_0059cd99:
0059CD99  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0059CD9C  68 FC C2 7C 00            PUSH 0x7cc2fc
0059CDA1  68 CC 4C 7A 00            PUSH 0x7a4ccc
0059CDA6  56                        PUSH ESI
0059CDA7  6A 00                     PUSH 0x0
0059CDA9  68 F4 05 00 00            PUSH 0x5f4
0059CDAE  68 70 BF 7C 00            PUSH 0x7cbf70
0059CDB3  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0059CDB8  E8 13 07 11 00            CALL 0x006ad4d0
0059CDBD  83 C4 18                  ADD ESP,0x18
0059CDC0  85 C0                     TEST EAX,EAX
0059CDC2  74 01                     JZ 0x0059cdc5
0059CDC4  CC                        INT3
LAB_0059cdc5:
0059CDC5  68 F4 05 00 00            PUSH 0x5f4
0059CDCA  68 70 BF 7C 00            PUSH 0x7cbf70
0059CDCF  6A 00                     PUSH 0x0
0059CDD1  56                        PUSH ESI
0059CDD2  E8 69 90 10 00            CALL 0x006a5e40
0059CDD7  5F                        POP EDI
0059CDD8  5E                        POP ESI
0059CDD9  8B E5                     MOV ESP,EBP
0059CDDB  5D                        POP EBP
0059CDDC  C3                        RET
