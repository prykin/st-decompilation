FUN_0048a910:
0048A910  8B 81 F7 06 00 00         MOV EAX,dword ptr [ECX + 0x6f7]
0048A916  53                        PUSH EBX
0048A917  48                        DEC EAX
0048A918  56                        PUSH ESI
0048A919  83 F8 27                  CMP EAX,0x27
0048A91C  57                        PUSH EDI
0048A91D  0F 87 92 1B 00 00         JA 0x0048c4b5
switchD_0048a923::switchD:
0048A923  FF 24 85 BC C4 48 00      JMP dword ptr [EAX*0x4 + 0x48c4bc]
switchD_0048a923::caseD_1:
0048A92A  33 C0                     XOR EAX,EAX
0048A92C  BF CE FF FF FF            MOV EDI,0xffffffce
0048A931  66 89 81 31 02 00 00      MOV word ptr [ECX + 0x231],AX
0048A938  66 89 81 33 02 00 00      MOV word ptr [ECX + 0x233],AX
0048A93F  66 C7 81 37 02 00 00 55 00  MOV word ptr [ECX + 0x237],0x55
0048A948  C6 81 81 02 00 00 05      MOV byte ptr [ECX + 0x281],0x5
0048A94F  66 89 B9 39 02 00 00      MOV word ptr [ECX + 0x239],DI
0048A956  BE 1E 00 00 00            MOV ESI,0x1e
0048A95B  66 C7 81 3B 02 00 00 F1 FF  MOV word ptr [ECX + 0x23b],0xfff1
0048A964  66 89 B1 3F 02 00 00      MOV word ptr [ECX + 0x23f],SI
0048A96B  66 89 B9 41 02 00 00      MOV word ptr [ECX + 0x241],DI
0048A972  66 C7 81 43 02 00 00 0F 00  MOV word ptr [ECX + 0x243],0xf
0048A97B  66 89 B1 47 02 00 00      MOV word ptr [ECX + 0x247],SI
0048A982  66 89 81 49 02 00 00      MOV word ptr [ECX + 0x249],AX
0048A989  66 C7 81 4B 02 00 00 EC FF  MOV word ptr [ECX + 0x24b],0xffec
0048A992  66 89 B1 4F 02 00 00      MOV word ptr [ECX + 0x24f],SI
0048A999  BA A1 FF FF FF            MOV EDX,0xffffffa1
0048A99E  66 89 81 51 02 00 00      MOV word ptr [ECX + 0x251],AX
0048A9A5  66 89 81 5B 02 00 00      MOV word ptr [ECX + 0x25b],AX
0048A9AC  66 89 81 A8 02 00 00      MOV word ptr [ECX + 0x2a8],AX
0048A9B3  66 C7 81 53 02 00 00 14 00  MOV word ptr [ECX + 0x253],0x14
0048A9BC  66 89 B1 57 02 00 00      MOV word ptr [ECX + 0x257],SI
0048A9C3  66 C7 81 59 02 00 00 2D 00  MOV word ptr [ECX + 0x259],0x2d
0048A9CC  66 C7 81 5F 02 00 00 19 00  MOV word ptr [ECX + 0x25f],0x19
0048A9D5  C6 81 B2 02 00 00 01      MOV byte ptr [ECX + 0x2b2],0x1
0048A9DC  66 C7 81 A6 02 00 00 28 00  MOV word ptr [ECX + 0x2a6],0x28
0048A9E5  66 C7 81 AA 02 00 00 DF FF  MOV word ptr [ECX + 0x2aa],0xffdf
0048A9EE  C6 81 BF 02 00 00 02      MOV byte ptr [ECX + 0x2bf],0x2
0048A9F5  66 89 91 B3 02 00 00      MOV word ptr [ECX + 0x2b3],DX
0048A9FC  66 89 B1 B5 02 00 00      MOV word ptr [ECX + 0x2b5],SI
0048AA03  B8 13 00 00 00            MOV EAX,0x13
LAB_0048aa08:
0048AA08  5F                        POP EDI
0048AA09  5E                        POP ESI
0048AA0A  66 89 81 B7 02 00 00      MOV word ptr [ECX + 0x2b7],AX
0048AA11  66 89 91 B9 02 00 00      MOV word ptr [ECX + 0x2b9],DX
0048AA18  66 C7 81 BB 02 00 00 E2 FF  MOV word ptr [ECX + 0x2bb],0xffe2
0048AA21  66 89 81 BD 02 00 00      MOV word ptr [ECX + 0x2bd],AX
0048AA28  5B                        POP EBX
0048AA29  C3                        RET
switchD_0048a923::caseD_2:
0048AA2A  33 C0                     XOR EAX,EAX
0048AA2C  BF D3 FF FF FF            MOV EDI,0xffffffd3
0048AA31  66 89 81 31 02 00 00      MOV word ptr [ECX + 0x231],AX
0048AA38  66 89 81 33 02 00 00      MOV word ptr [ECX + 0x233],AX
0048AA3F  66 C7 81 37 02 00 00 55 00  MOV word ptr [ECX + 0x237],0x55
0048AA48  C6 81 81 02 00 00 05      MOV byte ptr [ECX + 0x281],0x5
0048AA4F  BB EC FF FF FF            MOV EBX,0xffffffec
0048AA54  66 89 B9 39 02 00 00      MOV word ptr [ECX + 0x239],DI
0048AA5B  BE 1E 00 00 00            MOV ESI,0x1e
0048AA60  66 89 99 3B 02 00 00      MOV word ptr [ECX + 0x23b],BX
0048AA67  66 89 B1 3F 02 00 00      MOV word ptr [ECX + 0x23f],SI
0048AA6E  66 89 B9 41 02 00 00      MOV word ptr [ECX + 0x241],DI
0048AA75  BF 14 00 00 00            MOV EDI,0x14
0048AA7A  BA 0A 00 00 00            MOV EDX,0xa
0048AA7F  66 89 B9 43 02 00 00      MOV word ptr [ECX + 0x243],DI
0048AA86  66 89 B1 47 02 00 00      MOV word ptr [ECX + 0x247],SI
0048AA8D  66 89 91 49 02 00 00      MOV word ptr [ECX + 0x249],DX
0048AA94  66 89 99 4B 02 00 00      MOV word ptr [ECX + 0x24b],BX
0048AA9B  66 89 B1 4F 02 00 00      MOV word ptr [ECX + 0x24f],SI
0048AAA2  66 89 91 51 02 00 00      MOV word ptr [ECX + 0x251],DX
0048AAA9  66 89 B9 53 02 00 00      MOV word ptr [ECX + 0x253],DI
0048AAB0  66 89 81 5B 02 00 00      MOV word ptr [ECX + 0x25b],AX
0048AAB7  66 89 81 A6 02 00 00      MOV word ptr [ECX + 0x2a6],AX
0048AABE  66 89 81 A8 02 00 00      MOV word ptr [ECX + 0x2a8],AX
0048AAC5  66 89 B1 57 02 00 00      MOV word ptr [ECX + 0x257],SI
0048AACC  BA 97 FF FF FF            MOV EDX,0xffffff97
0048AAD1  B8 17 00 00 00            MOV EAX,0x17
0048AAD6  5F                        POP EDI
0048AAD7  5E                        POP ESI
0048AAD8  66 C7 81 59 02 00 00 2D 00  MOV word ptr [ECX + 0x259],0x2d
0048AAE1  66 C7 81 5F 02 00 00 19 00  MOV word ptr [ECX + 0x25f],0x19
0048AAEA  C6 81 B2 02 00 00 01      MOV byte ptr [ECX + 0x2b2],0x1
0048AAF1  66 C7 81 AA 02 00 00 DF FF  MOV word ptr [ECX + 0x2aa],0xffdf
0048AAFA  C6 81 BF 02 00 00 02      MOV byte ptr [ECX + 0x2bf],0x2
0048AB01  66 89 91 B3 02 00 00      MOV word ptr [ECX + 0x2b3],DX
0048AB08  66 C7 81 B5 02 00 00 25 00  MOV word ptr [ECX + 0x2b5],0x25
0048AB11  66 89 81 B7 02 00 00      MOV word ptr [ECX + 0x2b7],AX
0048AB18  66 89 91 B9 02 00 00      MOV word ptr [ECX + 0x2b9],DX
0048AB1F  66 C7 81 BB 02 00 00 DB FF  MOV word ptr [ECX + 0x2bb],0xffdb
0048AB28  66 89 81 BD 02 00 00      MOV word ptr [ECX + 0x2bd],AX
0048AB2F  5B                        POP EBX
0048AB30  C3                        RET
switchD_0048a923::caseD_3:
0048AB31  33 C0                     XOR EAX,EAX
0048AB33  BA B5 FF FF FF            MOV EDX,0xffffffb5
0048AB38  66 89 81 31 02 00 00      MOV word ptr [ECX + 0x231],AX
0048AB3F  66 89 81 33 02 00 00      MOV word ptr [ECX + 0x233],AX
0048AB46  66 C7 81 37 02 00 00 87 00  MOV word ptr [ECX + 0x237],0x87
0048AB4F  C6 81 81 02 00 00 06      MOV byte ptr [ECX + 0x281],0x6
0048AB56  B8 E2 FF FF FF            MOV EAX,0xffffffe2
0048AB5B  66 89 91 39 02 00 00      MOV word ptr [ECX + 0x239],DX
0048AB62  BF 2D 00 00 00            MOV EDI,0x2d
0048AB67  66 89 81 3B 02 00 00      MOV word ptr [ECX + 0x23b],AX
0048AB6E  66 89 B9 3F 02 00 00      MOV word ptr [ECX + 0x23f],DI
0048AB75  BE 1E 00 00 00            MOV ESI,0x1e
0048AB7A  66 89 91 41 02 00 00      MOV word ptr [ECX + 0x241],DX
0048AB81  66 89 B1 43 02 00 00      MOV word ptr [ECX + 0x243],SI
0048AB88  BA FB FF FF FF            MOV EDX,0xfffffffb
0048AB8D  66 89 B9 47 02 00 00      MOV word ptr [ECX + 0x247],DI
0048AB94  66 89 91 49 02 00 00      MOV word ptr [ECX + 0x249],DX
0048AB9B  66 89 81 4B 02 00 00      MOV word ptr [ECX + 0x24b],AX
0048ABA2  66 89 B9 4F 02 00 00      MOV word ptr [ECX + 0x24f],DI
0048ABA9  66 89 91 51 02 00 00      MOV word ptr [ECX + 0x251],DX
0048ABB0  66 89 B1 53 02 00 00      MOV word ptr [ECX + 0x253],SI
0048ABB7  66 89 81 5B 02 00 00      MOV word ptr [ECX + 0x25b],AX
0048ABBE  66 89 B1 63 02 00 00      MOV word ptr [ECX + 0x263],SI
0048ABC5  BA 28 00 00 00            MOV EDX,0x28
0048ABCA  66 89 B1 A8 02 00 00      MOV word ptr [ECX + 0x2a8],SI
0048ABD1  66 89 81 AE 02 00 00      MOV word ptr [ECX + 0x2ae],AX
0048ABD8  BB 3C 00 00 00            MOV EBX,0x3c
0048ABDD  BE DF FF FF FF            MOV ESI,0xffffffdf
0048ABE2  B8 79 FF FF FF            MOV EAX,0xffffff79
0048ABE7  66 89 91 A6 02 00 00      MOV word ptr [ECX + 0x2a6],DX
0048ABEE  66 89 91 AC 02 00 00      MOV word ptr [ECX + 0x2ac],DX
0048ABF5  66 89 B9 57 02 00 00      MOV word ptr [ECX + 0x257],DI
0048ABFC  66 89 99 59 02 00 00      MOV word ptr [ECX + 0x259],BX
0048AC03  66 89 B9 5F 02 00 00      MOV word ptr [ECX + 0x25f],DI
0048AC0A  66 89 99 61 02 00 00      MOV word ptr [ECX + 0x261],BX
0048AC11  66 89 B9 67 02 00 00      MOV word ptr [ECX + 0x267],DI
0048AC18  C6 81 B2 02 00 00 02      MOV byte ptr [ECX + 0x2b2],0x2
0048AC1F  66 89 B1 AA 02 00 00      MOV word ptr [ECX + 0x2aa],SI
0048AC26  66 89 B1 B0 02 00 00      MOV word ptr [ECX + 0x2b0],SI
0048AC2D  C6 81 BF 02 00 00 02      MOV byte ptr [ECX + 0x2bf],0x2
0048AC34  66 89 81 B3 02 00 00      MOV word ptr [ECX + 0x2b3],AX
0048AC3B  66 C7 81 B5 02 00 00 23 00  MOV word ptr [ECX + 0x2b5],0x23
0048AC44  BA 27 00 00 00            MOV EDX,0x27
0048AC49  E9 92 0C 00 00            JMP 0x0048b8e0
switchD_0048a923::caseD_4:
0048AC4E  33 C0                     XOR EAX,EAX
0048AC50  BE BA FF FF FF            MOV ESI,0xffffffba
0048AC55  66 89 81 31 02 00 00      MOV word ptr [ECX + 0x231],AX
0048AC5C  66 89 81 33 02 00 00      MOV word ptr [ECX + 0x233],AX
0048AC63  66 C7 81 37 02 00 00 82 00  MOV word ptr [ECX + 0x237],0x82
0048AC6C  C6 81 81 02 00 00 06      MOV byte ptr [ECX + 0x281],0x6
0048AC73  BB E7 FF FF FF            MOV EBX,0xffffffe7
0048AC78  66 89 B1 39 02 00 00      MOV word ptr [ECX + 0x239],SI
0048AC7F  BA 28 00 00 00            MOV EDX,0x28
0048AC84  66 89 99 3B 02 00 00      MOV word ptr [ECX + 0x23b],BX
0048AC8B  66 89 91 3F 02 00 00      MOV word ptr [ECX + 0x23f],DX
0048AC92  66 89 B1 41 02 00 00      MOV word ptr [ECX + 0x241],SI
0048AC99  BE 19 00 00 00            MOV ESI,0x19
0048AC9E  BF 46 00 00 00            MOV EDI,0x46
0048ACA3  66 89 B1 43 02 00 00      MOV word ptr [ECX + 0x243],SI
0048ACAA  66 89 91 47 02 00 00      MOV word ptr [ECX + 0x247],DX
0048ACB1  66 89 81 49 02 00 00      MOV word ptr [ECX + 0x249],AX
0048ACB8  66 89 99 4B 02 00 00      MOV word ptr [ECX + 0x24b],BX
0048ACBF  66 89 91 4F 02 00 00      MOV word ptr [ECX + 0x24f],DX
0048ACC6  66 89 81 51 02 00 00      MOV word ptr [ECX + 0x251],AX
0048ACCD  66 89 91 57 02 00 00      MOV word ptr [ECX + 0x257],DX
0048ACD4  66 89 B9 59 02 00 00      MOV word ptr [ECX + 0x259],DI
0048ACDB  66 89 91 5F 02 00 00      MOV word ptr [ECX + 0x25f],DX
0048ACE2  66 89 B9 61 02 00 00      MOV word ptr [ECX + 0x261],DI
0048ACE9  66 89 91 67 02 00 00      MOV word ptr [ECX + 0x267],DX
0048ACF0  66 89 81 A6 02 00 00      MOV word ptr [ECX + 0x2a6],AX
0048ACF7  66 89 81 A8 02 00 00      MOV word ptr [ECX + 0x2a8],AX
0048ACFE  66 89 B1 53 02 00 00      MOV word ptr [ECX + 0x253],SI
0048AD05  66 89 B1 63 02 00 00      MOV word ptr [ECX + 0x263],SI
0048AD0C  BA 83 FF FF FF            MOV EDX,0xffffff83
0048AD11  B8 FA FF FF FF            MOV EAX,0xfffffffa
0048AD16  5F                        POP EDI
0048AD17  66 89 99 5B 02 00 00      MOV word ptr [ECX + 0x25b],BX
0048AD1E  5E                        POP ESI
0048AD1F  C6 81 B2 02 00 00 01      MOV byte ptr [ECX + 0x2b2],0x1
0048AD26  66 C7 81 AA 02 00 00 DF FF  MOV word ptr [ECX + 0x2aa],0xffdf
0048AD2F  C6 81 BF 02 00 00 02      MOV byte ptr [ECX + 0x2bf],0x2
0048AD36  66 89 91 B3 02 00 00      MOV word ptr [ECX + 0x2b3],DX
0048AD3D  66 C7 81 B5 02 00 00 2A 00  MOV word ptr [ECX + 0x2b5],0x2a
0048AD46  66 89 81 B7 02 00 00      MOV word ptr [ECX + 0x2b7],AX
0048AD4D  66 89 91 B9 02 00 00      MOV word ptr [ECX + 0x2b9],DX
0048AD54  66 C7 81 BB 02 00 00 D6 FF  MOV word ptr [ECX + 0x2bb],0xffd6
0048AD5D  66 89 81 BD 02 00 00      MOV word ptr [ECX + 0x2bd],AX
0048AD64  5B                        POP EBX
0048AD65  C3                        RET
switchD_0048a923::caseD_5:
0048AD66  33 C0                     XOR EAX,EAX
0048AD68  BE C4 FF FF FF            MOV ESI,0xffffffc4
0048AD6D  66 89 81 31 02 00 00      MOV word ptr [ECX + 0x231],AX
0048AD74  66 89 81 33 02 00 00      MOV word ptr [ECX + 0x233],AX
0048AD7B  66 C7 81 37 02 00 00 6E 00  MOV word ptr [ECX + 0x237],0x6e
0048AD84  C6 81 81 02 00 00 05      MOV byte ptr [ECX + 0x281],0x5
0048AD8B  BF F1 FF FF FF            MOV EDI,0xfffffff1
0048AD90  66 89 B1 39 02 00 00      MOV word ptr [ECX + 0x239],SI
0048AD97  BB 32 00 00 00            MOV EBX,0x32
0048AD9C  66 89 B9 3B 02 00 00      MOV word ptr [ECX + 0x23b],DI
0048ADA3  66 89 99 3F 02 00 00      MOV word ptr [ECX + 0x23f],BX
0048ADAA  66 89 B1 41 02 00 00      MOV word ptr [ECX + 0x241],SI
0048ADB1  BE 0F 00 00 00            MOV ESI,0xf
0048ADB6  BA FB FF FF FF            MOV EDX,0xfffffffb
0048ADBB  66 89 B1 43 02 00 00      MOV word ptr [ECX + 0x243],SI
0048ADC2  66 89 99 47 02 00 00      MOV word ptr [ECX + 0x247],BX
0048ADC9  66 89 91 49 02 00 00      MOV word ptr [ECX + 0x249],DX
0048ADD0  66 89 B9 4B 02 00 00      MOV word ptr [ECX + 0x24b],DI
0048ADD7  66 89 99 4F 02 00 00      MOV word ptr [ECX + 0x24f],BX
0048ADDE  66 89 91 51 02 00 00      MOV word ptr [ECX + 0x251],DX
0048ADE5  BA 88 FF FF FF            MOV EDX,0xffffff88
0048ADEA  66 89 81 5B 02 00 00      MOV word ptr [ECX + 0x25b],AX
0048ADF1  66 89 81 A6 02 00 00      MOV word ptr [ECX + 0x2a6],AX
0048ADF8  66 89 81 A8 02 00 00      MOV word ptr [ECX + 0x2a8],AX
0048ADFF  66 89 B1 53 02 00 00      MOV word ptr [ECX + 0x253],SI
0048AE06  66 89 99 57 02 00 00      MOV word ptr [ECX + 0x257],BX
0048AE0D  66 C7 81 59 02 00 00 41 00  MOV word ptr [ECX + 0x259],0x41
0048AE16  66 C7 81 5F 02 00 00 23 00  MOV word ptr [ECX + 0x25f],0x23
0048AE1F  C6 81 B2 02 00 00 01      MOV byte ptr [ECX + 0x2b2],0x1
0048AE26  66 C7 81 AA 02 00 00 DF FF  MOV word ptr [ECX + 0x2aa],0xffdf
0048AE2F  C6 81 BF 02 00 00 02      MOV byte ptr [ECX + 0x2bf],0x2
0048AE36  66 89 91 B3 02 00 00      MOV word ptr [ECX + 0x2b3],DX
0048AE3D  66 C7 81 B5 02 00 00 1E 00  MOV word ptr [ECX + 0x2b5],0x1e
0048AE46  B8 1D 00 00 00            MOV EAX,0x1d
0048AE4B  E9 B8 FB FF FF            JMP 0x0048aa08
switchD_0048a923::caseD_6:
0048AE50  33 C0                     XOR EAX,EAX
0048AE52  BB 32 00 00 00            MOV EBX,0x32
0048AE57  66 89 81 31 02 00 00      MOV word ptr [ECX + 0x231],AX
0048AE5E  66 89 81 33 02 00 00      MOV word ptr [ECX + 0x233],AX
0048AE65  66 C7 81 37 02 00 00 7D 00  MOV word ptr [ECX + 0x237],0x7d
0048AE6E  C6 81 81 02 00 00 04      MOV byte ptr [ECX + 0x281],0x4
0048AE75  66 C7 81 39 02 00 00 C4 FF  MOV word ptr [ECX + 0x239],0xffc4
0048AE7E  66 89 81 3B 02 00 00      MOV word ptr [ECX + 0x23b],AX
0048AE85  66 C7 81 3F 02 00 00 3C 00  MOV word ptr [ECX + 0x23f],0x3c
0048AE8E  66 89 81 41 02 00 00      MOV word ptr [ECX + 0x241],AX
0048AE95  66 89 81 43 02 00 00      MOV word ptr [ECX + 0x243],AX
0048AE9C  66 C7 81 47 02 00 00 23 00  MOV word ptr [ECX + 0x247],0x23
0048AEA5  66 89 99 49 02 00 00      MOV word ptr [ECX + 0x249],BX
0048AEAC  66 89 81 4B 02 00 00      MOV word ptr [ECX + 0x24b],AX
0048AEB3  66 89 99 4F 02 00 00      MOV word ptr [ECX + 0x24f],BX
0048AEBA  66 C7 81 51 02 00 00 64 00  MOV word ptr [ECX + 0x251],0x64
0048AEC3  66 89 81 53 02 00 00      MOV word ptr [ECX + 0x253],AX
0048AECA  66 C7 81 57 02 00 00 1E 00  MOV word ptr [ECX + 0x257],0x1e
0048AED3  C6 81 B2 02 00 00 01      MOV byte ptr [ECX + 0x2b2],0x1
0048AEDA  66 89 81 A6 02 00 00      MOV word ptr [ECX + 0x2a6],AX
0048AEE1  66 89 81 A8 02 00 00      MOV word ptr [ECX + 0x2a8],AX
0048AEE8  66 C7 81 AA 02 00 00 DF FF  MOV word ptr [ECX + 0x2aa],0xffdf
0048AEF1  E9 06 15 00 00            JMP 0x0048c3fc
switchD_0048a923::caseD_7:
0048AEF6  33 C0                     XOR EAX,EAX
0048AEF8  BA BA FF FF FF            MOV EDX,0xffffffba
0048AEFD  66 89 81 31 02 00 00      MOV word ptr [ECX + 0x231],AX
0048AF04  66 89 81 33 02 00 00      MOV word ptr [ECX + 0x233],AX
0048AF0B  66 C7 81 37 02 00 00 8C 00  MOV word ptr [ECX + 0x237],0x8c
0048AF14  C6 81 81 02 00 00 09      MOV byte ptr [ECX + 0x281],0x9
0048AF1B  BB C9 FF FF FF            MOV EBX,0xffffffc9
0048AF20  66 89 91 39 02 00 00      MOV word ptr [ECX + 0x239],DX
0048AF27  BE 37 00 00 00            MOV ESI,0x37
0048AF2C  66 89 99 3B 02 00 00      MOV word ptr [ECX + 0x23b],BX
0048AF33  66 89 B1 3F 02 00 00      MOV word ptr [ECX + 0x23f],SI
0048AF3A  66 89 81 41 02 00 00      MOV word ptr [ECX + 0x241],AX
0048AF41  66 89 99 43 02 00 00      MOV word ptr [ECX + 0x243],BX
0048AF48  BF 46 00 00 00            MOV EDI,0x46
0048AF4D  66 89 B1 47 02 00 00      MOV word ptr [ECX + 0x247],SI
0048AF54  66 89 B9 49 02 00 00      MOV word ptr [ECX + 0x249],DI
0048AF5B  66 C7 81 4B 02 00 00 BF FF  MOV word ptr [ECX + 0x24b],0xffbf
0048AF64  66 89 81 53 02 00 00      MOV word ptr [ECX + 0x253],AX
0048AF6B  66 89 81 59 02 00 00      MOV word ptr [ECX + 0x259],AX
0048AF72  66 89 81 5B 02 00 00      MOV word ptr [ECX + 0x25b],AX
0048AF79  BB 41 00 00 00            MOV EBX,0x41
0048AF7E  66 89 81 63 02 00 00      MOV word ptr [ECX + 0x263],AX
0048AF85  66 89 91 69 02 00 00      MOV word ptr [ECX + 0x269],DX
0048AF8C  66 89 81 71 02 00 00      MOV word ptr [ECX + 0x271],AX
0048AF93  66 89 B9 79 02 00 00      MOV word ptr [ECX + 0x279],DI
0048AF9A  66 89 B1 4F 02 00 00      MOV word ptr [ECX + 0x24f],SI
0048AFA1  66 89 B1 57 02 00 00      MOV word ptr [ECX + 0x257],SI
0048AFA8  66 89 B1 5F 02 00 00      MOV word ptr [ECX + 0x25f],SI
0048AFAF  66 89 B1 67 02 00 00      MOV word ptr [ECX + 0x267],SI
0048AFB6  66 89 B1 6B 02 00 00      MOV word ptr [ECX + 0x26b],SI
0048AFBD  66 89 B1 6F 02 00 00      MOV word ptr [ECX + 0x26f],SI
0048AFC4  66 89 B1 73 02 00 00      MOV word ptr [ECX + 0x273],SI
0048AFCB  66 89 B1 77 02 00 00      MOV word ptr [ECX + 0x277],SI
0048AFD2  66 89 B1 7F 02 00 00      MOV word ptr [ECX + 0x27f],SI
0048AFD9  BA 7E FF FF FF            MOV EDX,0xffffff7e
0048AFDE  B8 DA FF FF FF            MOV EAX,0xffffffda
0048AFE3  5F                        POP EDI
0048AFE4  66 89 99 61 02 00 00      MOV word ptr [ECX + 0x261],BX
0048AFEB  66 89 99 7B 02 00 00      MOV word ptr [ECX + 0x27b],BX
0048AFF2  5E                        POP ESI
0048AFF3  66 C7 81 51 02 00 00 C4 FF  MOV word ptr [ECX + 0x251],0xffc4
0048AFFC  C6 81 BF 02 00 00 02      MOV byte ptr [ECX + 0x2bf],0x2
0048B003  66 89 91 B3 02 00 00      MOV word ptr [ECX + 0x2b3],DX
0048B00A  66 C7 81 B5 02 00 00 62 00  MOV word ptr [ECX + 0x2b5],0x62
0048B013  66 89 81 B7 02 00 00      MOV word ptr [ECX + 0x2b7],AX
0048B01A  66 89 91 B9 02 00 00      MOV word ptr [ECX + 0x2b9],DX
0048B021  66 C7 81 BB 02 00 00 9E FF  MOV word ptr [ECX + 0x2bb],0xff9e
0048B02A  66 89 81 BD 02 00 00      MOV word ptr [ECX + 0x2bd],AX
0048B031  5B                        POP EBX
0048B032  C3                        RET
switchD_0048a923::caseD_8:
0048B033  33 C0                     XOR EAX,EAX
0048B035  BA BF FF FF FF            MOV EDX,0xffffffbf
0048B03A  66 89 81 31 02 00 00      MOV word ptr [ECX + 0x231],AX
0048B041  66 89 81 33 02 00 00      MOV word ptr [ECX + 0x233],AX
0048B048  66 C7 81 37 02 00 00 78 00  MOV word ptr [ECX + 0x237],0x78
0048B051  C6 81 81 02 00 00 05      MOV byte ptr [ECX + 0x281],0x5
0048B058  66 89 91 39 02 00 00      MOV word ptr [ECX + 0x239],DX
0048B05F  BB 32 00 00 00            MOV EBX,0x32
0048B064  66 C7 81 3B 02 00 00 EC FF  MOV word ptr [ECX + 0x23b],0xffec
0048B06D  66 89 99 3F 02 00 00      MOV word ptr [ECX + 0x23f],BX
0048B074  66 89 91 41 02 00 00      MOV word ptr [ECX + 0x241],DX
0048B07B  66 C7 81 43 02 00 00 14 00  MOV word ptr [ECX + 0x243],0x14
0048B084  BE 0F 00 00 00            MOV ESI,0xf
0048B089  66 89 99 47 02 00 00      MOV word ptr [ECX + 0x247],BX
0048B090  66 89 B1 49 02 00 00      MOV word ptr [ECX + 0x249],SI
0048B097  BF 2D 00 00 00            MOV EDI,0x2d
0048B09C  66 C7 81 4B 02 00 00 F1 FF  MOV word ptr [ECX + 0x24b],0xfff1
0048B0A5  BA 7E FF FF FF            MOV EDX,0xffffff7e
0048B0AA  66 89 B9 4F 02 00 00      MOV word ptr [ECX + 0x24f],DI
0048B0B1  66 89 B1 51 02 00 00      MOV word ptr [ECX + 0x251],SI
0048B0B8  66 89 B1 53 02 00 00      MOV word ptr [ECX + 0x253],SI
0048B0BF  66 89 B9 57 02 00 00      MOV word ptr [ECX + 0x257],DI
0048B0C6  66 C7 81 59 02 00 00 4B 00  MOV word ptr [ECX + 0x259],0x4b
0048B0CF  66 89 81 5B 02 00 00      MOV word ptr [ECX + 0x25b],AX
0048B0D6  66 C7 81 5F 02 00 00 23 00  MOV word ptr [ECX + 0x25f],0x23
0048B0DF  C6 81 BF 02 00 00 02      MOV byte ptr [ECX + 0x2bf],0x2
0048B0E6  66 89 91 B3 02 00 00      MOV word ptr [ECX + 0x2b3],DX
0048B0ED  66 89 B9 B5 02 00 00      MOV word ptr [ECX + 0x2b5],DI
0048B0F4  E9 1F 13 00 00            JMP 0x0048c418
switchD_0048a923::caseD_9:
0048B0F9  33 C0                     XOR EAX,EAX
0048B0FB  BB 3C 00 00 00            MOV EBX,0x3c
0048B100  66 89 81 31 02 00 00      MOV word ptr [ECX + 0x231],AX
0048B107  66 89 81 33 02 00 00      MOV word ptr [ECX + 0x233],AX
0048B10E  66 89 99 37 02 00 00      MOV word ptr [ECX + 0x237],BX
0048B115  C6 81 81 02 00 00 01      MOV byte ptr [ECX + 0x281],0x1
0048B11C  66 89 81 39 02 00 00      MOV word ptr [ECX + 0x239],AX
0048B123  66 89 81 3B 02 00 00      MOV word ptr [ECX + 0x23b],AX
0048B12A  5F                        POP EDI
0048B12B  66 89 99 3F 02 00 00      MOV word ptr [ECX + 0x23f],BX
0048B132  5E                        POP ESI
0048B133  5B                        POP EBX
0048B134  C3                        RET
switchD_0048a923::caseD_d:
0048B135  33 C0                     XOR EAX,EAX
0048B137  BE DD FF FF FF            MOV ESI,0xffffffdd
0048B13C  66 89 81 31 02 00 00      MOV word ptr [ECX + 0x231],AX
0048B143  66 89 81 33 02 00 00      MOV word ptr [ECX + 0x233],AX
0048B14A  66 C7 81 37 02 00 00 5A 00  MOV word ptr [ECX + 0x237],0x5a
0048B153  C6 81 81 02 00 00 04      MOV byte ptr [ECX + 0x281],0x4
0048B15A  66 89 B1 39 02 00 00      MOV word ptr [ECX + 0x239],SI
0048B161  BF 2D 00 00 00            MOV EDI,0x2d
0048B166  66 C7 81 3B 02 00 00 E7 FF  MOV word ptr [ECX + 0x23b],0xffe7
0048B16F  66 89 B9 3F 02 00 00      MOV word ptr [ECX + 0x23f],DI
0048B176  BA 19 00 00 00            MOV EDX,0x19
0048B17B  66 89 B1 41 02 00 00      MOV word ptr [ECX + 0x241],SI
0048B182  66 89 91 43 02 00 00      MOV word ptr [ECX + 0x243],DX
0048B189  66 89 B9 47 02 00 00      MOV word ptr [ECX + 0x247],DI
0048B190  BE 9C FF FF FF            MOV ESI,0xffffff9c
0048B195  66 89 91 49 02 00 00      MOV word ptr [ECX + 0x249],DX
0048B19C  66 89 81 4B 02 00 00      MOV word ptr [ECX + 0x24b],AX
0048B1A3  66 89 B1 B3 02 00 00      MOV word ptr [ECX + 0x2b3],SI
0048B1AA  66 89 B1 B9 02 00 00      MOV word ptr [ECX + 0x2b9],SI
0048B1B1  5F                        POP EDI
0048B1B2  66 C7 81 4F 02 00 00 23 00  MOV word ptr [ECX + 0x24f],0x23
0048B1BB  5E                        POP ESI
0048B1BC  66 C7 81 51 02 00 00 3C 00  MOV word ptr [ECX + 0x251],0x3c
0048B1C5  66 89 81 53 02 00 00      MOV word ptr [ECX + 0x253],AX
0048B1CC  66 C7 81 57 02 00 00 0F 00  MOV word ptr [ECX + 0x257],0xf
0048B1D5  C6 81 B2 02 00 00 01      MOV byte ptr [ECX + 0x2b2],0x1
0048B1DC  66 89 81 A6 02 00 00      MOV word ptr [ECX + 0x2a6],AX
0048B1E3  66 89 81 A8 02 00 00      MOV word ptr [ECX + 0x2a8],AX
0048B1EA  66 C7 81 AA 02 00 00 DF FF  MOV word ptr [ECX + 0x2aa],0xffdf
0048B1F3  C6 81 BF 02 00 00 02      MOV byte ptr [ECX + 0x2bf],0x2
0048B1FA  66 C7 81 B5 02 00 00 14 00  MOV word ptr [ECX + 0x2b5],0x14
0048B203  66 89 81 B7 02 00 00      MOV word ptr [ECX + 0x2b7],AX
0048B20A  66 C7 81 BB 02 00 00 EC FF  MOV word ptr [ECX + 0x2bb],0xffec
0048B213  66 89 81 BD 02 00 00      MOV word ptr [ECX + 0x2bd],AX
0048B21A  5B                        POP EBX
0048B21B  C3                        RET
switchD_0048a923::caseD_e:
0048B21C  33 C0                     XOR EAX,EAX
0048B21E  BF CE FF FF FF            MOV EDI,0xffffffce
0048B223  66 89 81 31 02 00 00      MOV word ptr [ECX + 0x231],AX
0048B22A  66 89 81 33 02 00 00      MOV word ptr [ECX + 0x233],AX
0048B231  66 C7 81 37 02 00 00 5F 00  MOV word ptr [ECX + 0x237],0x5f
0048B23A  C6 81 81 02 00 00 05      MOV byte ptr [ECX + 0x281],0x5
0048B241  66 89 B9 39 02 00 00      MOV word ptr [ECX + 0x239],DI
0048B248  BA 28 00 00 00            MOV EDX,0x28
0048B24D  66 C7 81 3B 02 00 00 E2 FF  MOV word ptr [ECX + 0x23b],0xffe2
0048B256  66 89 91 3F 02 00 00      MOV word ptr [ECX + 0x23f],DX
0048B25D  BE 1E 00 00 00            MOV ESI,0x1e
0048B262  66 89 B9 41 02 00 00      MOV word ptr [ECX + 0x241],DI
0048B269  66 89 B1 43 02 00 00      MOV word ptr [ECX + 0x243],SI
0048B270  66 89 B1 A8 02 00 00      MOV word ptr [ECX + 0x2a8],SI
0048B277  BB 19 00 00 00            MOV EBX,0x19
0048B27C  BE DF FF FF FF            MOV ESI,0xffffffdf
0048B281  66 89 91 47 02 00 00      MOV word ptr [ECX + 0x247],DX
0048B288  66 89 99 49 02 00 00      MOV word ptr [ECX + 0x249],BX
0048B28F  BF 2D 00 00 00            MOV EDI,0x2d
0048B294  66 89 81 5B 02 00 00      MOV word ptr [ECX + 0x25b],AX
0048B29B  66 89 91 A6 02 00 00      MOV word ptr [ECX + 0x2a6],DX
0048B2A2  66 89 B1 AA 02 00 00      MOV word ptr [ECX + 0x2aa],SI
0048B2A9  66 89 91 AC 02 00 00      MOV word ptr [ECX + 0x2ac],DX
0048B2B0  66 89 B1 B0 02 00 00      MOV word ptr [ECX + 0x2b0],SI
0048B2B7  66 C7 81 4B 02 00 00 E7 FF  MOV word ptr [ECX + 0x24b],0xffe7
0048B2C0  B8 23 00 00 00            MOV EAX,0x23
0048B2C5  BE 9C FF FF FF            MOV ESI,0xffffff9c
0048B2CA  BA 03 00 00 00            MOV EDX,0x3
0048B2CF  66 89 B9 4F 02 00 00      MOV word ptr [ECX + 0x24f],DI
0048B2D6  66 89 99 51 02 00 00      MOV word ptr [ECX + 0x251],BX
0048B2DD  66 89 99 53 02 00 00      MOV word ptr [ECX + 0x253],BX
0048B2E4  66 89 B9 57 02 00 00      MOV word ptr [ECX + 0x257],DI
0048B2EB  66 C7 81 59 02 00 00 3C 00  MOV word ptr [ECX + 0x259],0x3c
0048B2F4  66 89 81 5F 02 00 00      MOV word ptr [ECX + 0x25f],AX
0048B2FB  C6 81 B2 02 00 00 02      MOV byte ptr [ECX + 0x2b2],0x2
0048B302  66 C7 81 AE 02 00 00 E2 FF  MOV word ptr [ECX + 0x2ae],0xffe2
0048B30B  C6 81 BF 02 00 00 02      MOV byte ptr [ECX + 0x2bf],0x2
0048B312  66 89 B1 B3 02 00 00      MOV word ptr [ECX + 0x2b3],SI
0048B319  66 89 81 B5 02 00 00      MOV word ptr [ECX + 0x2b5],AX
0048B320  66 89 91 B7 02 00 00      MOV word ptr [ECX + 0x2b7],DX
0048B327  66 89 B1 B9 02 00 00      MOV word ptr [ECX + 0x2b9],SI
0048B32E  E9 BB 05 00 00            JMP 0x0048b8ee
switchD_0048a923::caseD_f:
0048B333  33 C0                     XOR EAX,EAX
0048B335  BB C9 FF FF FF            MOV EBX,0xffffffc9
0048B33A  66 89 81 31 02 00 00      MOV word ptr [ECX + 0x231],AX
0048B341  66 89 81 33 02 00 00      MOV word ptr [ECX + 0x233],AX
0048B348  66 C7 81 37 02 00 00 73 00  MOV word ptr [ECX + 0x237],0x73
0048B351  C6 81 81 02 00 00 06      MOV byte ptr [ECX + 0x281],0x6
0048B358  BE DD FF FF FF            MOV ESI,0xffffffdd
0048B35D  66 89 99 39 02 00 00      MOV word ptr [ECX + 0x239],BX
0048B364  BF 2D 00 00 00            MOV EDI,0x2d
0048B369  66 89 B1 3B 02 00 00      MOV word ptr [ECX + 0x23b],SI
0048B370  66 89 B9 3F 02 00 00      MOV word ptr [ECX + 0x23f],DI
0048B377  BA 23 00 00 00            MOV EDX,0x23
0048B37C  66 89 99 41 02 00 00      MOV word ptr [ECX + 0x241],BX
0048B383  66 89 91 43 02 00 00      MOV word ptr [ECX + 0x243],DX
0048B38A  66 89 B9 47 02 00 00      MOV word ptr [ECX + 0x247],DI
0048B391  66 89 81 49 02 00 00      MOV word ptr [ECX + 0x249],AX
0048B398  66 89 B1 4B 02 00 00      MOV word ptr [ECX + 0x24b],SI
0048B39F  66 89 B9 4F 02 00 00      MOV word ptr [ECX + 0x24f],DI
0048B3A6  66 89 B9 57 02 00 00      MOV word ptr [ECX + 0x257],DI
0048B3AD  66 89 B9 5F 02 00 00      MOV word ptr [ECX + 0x25f],DI
0048B3B4  66 89 B9 67 02 00 00      MOV word ptr [ECX + 0x267],DI
0048B3BB  66 89 B1 5B 02 00 00      MOV word ptr [ECX + 0x25b],SI
0048B3C2  BF 46 00 00 00            MOV EDI,0x46
0048B3C7  BE DF FF FF FF            MOV ESI,0xffffffdf
0048B3CC  66 89 81 51 02 00 00      MOV word ptr [ECX + 0x251],AX
0048B3D3  66 89 91 53 02 00 00      MOV word ptr [ECX + 0x253],DX
0048B3DA  BB 32 00 00 00            MOV EBX,0x32
0048B3DF  66 89 91 63 02 00 00      MOV word ptr [ECX + 0x263],DX
0048B3E6  66 89 B9 A6 02 00 00      MOV word ptr [ECX + 0x2a6],DI
0048B3ED  66 89 B9 AC 02 00 00      MOV word ptr [ECX + 0x2ac],DI
0048B3F4  66 89 B1 AA 02 00 00      MOV word ptr [ECX + 0x2aa],SI
0048B3FB  66 89 B1 B0 02 00 00      MOV word ptr [ECX + 0x2b0],SI
0048B402  B8 92 FF FF FF            MOV EAX,0xffffff92
0048B407  BA E6 FF FF FF            MOV EDX,0xffffffe6
0048B40C  5F                        POP EDI
0048B40D  66 89 99 59 02 00 00      MOV word ptr [ECX + 0x259],BX
0048B414  66 89 99 61 02 00 00      MOV word ptr [ECX + 0x261],BX
0048B41B  5E                        POP ESI
0048B41C  C6 81 B2 02 00 00 02      MOV byte ptr [ECX + 0x2b2],0x2
0048B423  66 C7 81 A8 02 00 00 1E 00  MOV word ptr [ECX + 0x2a8],0x1e
0048B42C  66 C7 81 AE 02 00 00 E2 FF  MOV word ptr [ECX + 0x2ae],0xffe2
0048B435  C6 81 BF 02 00 00 02      MOV byte ptr [ECX + 0x2bf],0x2
0048B43C  66 89 81 B3 02 00 00      MOV word ptr [ECX + 0x2b3],AX
0048B443  66 C7 81 B5 02 00 00 19 00  MOV word ptr [ECX + 0x2b5],0x19
0048B44C  66 89 91 B7 02 00 00      MOV word ptr [ECX + 0x2b7],DX
0048B453  66 89 81 B9 02 00 00      MOV word ptr [ECX + 0x2b9],AX
0048B45A  66 C7 81 BB 02 00 00 E7 FF  MOV word ptr [ECX + 0x2bb],0xffe7
0048B463  66 89 91 BD 02 00 00      MOV word ptr [ECX + 0x2bd],DX
0048B46A  5B                        POP EBX
0048B46B  C3                        RET
switchD_0048a923::caseD_10:
0048B46C  33 C0                     XOR EAX,EAX
0048B46E  BF D3 FF FF FF            MOV EDI,0xffffffd3
0048B473  66 89 81 31 02 00 00      MOV word ptr [ECX + 0x231],AX
0048B47A  66 89 81 33 02 00 00      MOV word ptr [ECX + 0x233],AX
0048B481  66 C7 81 37 02 00 00 5F 00  MOV word ptr [ECX + 0x237],0x5f
0048B48A  C6 81 81 02 00 00 05      MOV byte ptr [ECX + 0x281],0x5
0048B491  66 89 B9 39 02 00 00      MOV word ptr [ECX + 0x239],DI
0048B498  BA 28 00 00 00            MOV EDX,0x28
0048B49D  66 C7 81 3B 02 00 00 E2 FF  MOV word ptr [ECX + 0x23b],0xffe2
0048B4A6  66 89 91 3F 02 00 00      MOV word ptr [ECX + 0x23f],DX
0048B4AD  66 89 B9 41 02 00 00      MOV word ptr [ECX + 0x241],DI
0048B4B4  66 C7 81 43 02 00 00 1E 00  MOV word ptr [ECX + 0x243],0x1e
0048B4BD  66 89 91 47 02 00 00      MOV word ptr [ECX + 0x247],DX
0048B4C4  66 89 81 49 02 00 00      MOV word ptr [ECX + 0x249],AX
0048B4CB  BB 32 00 00 00            MOV EBX,0x32
0048B4D0  66 89 91 53 02 00 00      MOV word ptr [ECX + 0x253],DX
0048B4D7  66 89 91 5F 02 00 00      MOV word ptr [ECX + 0x25f],DX
0048B4DE  66 C7 81 4B 02 00 00 D8 FF  MOV word ptr [ECX + 0x24b],0xffd8
0048B4E7  BA 97 FF FF FF            MOV EDX,0xffffff97
0048B4EC  5F                        POP EDI
0048B4ED  66 89 99 4F 02 00 00      MOV word ptr [ECX + 0x24f],BX
0048B4F4  66 89 99 57 02 00 00      MOV word ptr [ECX + 0x257],BX
0048B4FB  66 89 99 59 02 00 00      MOV word ptr [ECX + 0x259],BX
0048B502  5E                        POP ESI
0048B503  66 89 81 51 02 00 00      MOV word ptr [ECX + 0x251],AX
0048B50A  66 89 81 5B 02 00 00      MOV word ptr [ECX + 0x25b],AX
0048B511  C6 81 B2 02 00 00 01      MOV byte ptr [ECX + 0x2b2],0x1
0048B518  66 89 81 A6 02 00 00      MOV word ptr [ECX + 0x2a6],AX
0048B51F  66 89 81 A8 02 00 00      MOV word ptr [ECX + 0x2a8],AX
0048B526  66 C7 81 AA 02 00 00 DF FF  MOV word ptr [ECX + 0x2aa],0xffdf
0048B52F  C6 81 BF 02 00 00 02      MOV byte ptr [ECX + 0x2bf],0x2
0048B536  66 89 91 B3 02 00 00      MOV word ptr [ECX + 0x2b3],DX
0048B53D  66 C7 81 B5 02 00 00 0A 00  MOV word ptr [ECX + 0x2b5],0xa
0048B546  66 89 81 B7 02 00 00      MOV word ptr [ECX + 0x2b7],AX
0048B54D  66 89 91 B9 02 00 00      MOV word ptr [ECX + 0x2b9],DX
0048B554  66 C7 81 BB 02 00 00 F6 FF  MOV word ptr [ECX + 0x2bb],0xfff6
0048B55D  66 89 81 BD 02 00 00      MOV word ptr [ECX + 0x2bd],AX
0048B564  5B                        POP EBX
0048B565  C3                        RET
switchD_0048a923::caseD_11:
0048B566  33 C0                     XOR EAX,EAX
0048B568  BB C9 FF FF FF            MOV EBX,0xffffffc9
0048B56D  66 89 81 31 02 00 00      MOV word ptr [ECX + 0x231],AX
0048B574  66 89 81 33 02 00 00      MOV word ptr [ECX + 0x233],AX
0048B57B  66 C7 81 37 02 00 00 73 00  MOV word ptr [ECX + 0x237],0x73
0048B584  C6 81 81 02 00 00 05      MOV byte ptr [ECX + 0x281],0x5
0048B58B  66 89 99 39 02 00 00      MOV word ptr [ECX + 0x239],BX
0048B592  BE 37 00 00 00            MOV ESI,0x37
0048B597  66 C7 81 3B 02 00 00 EC FF  MOV word ptr [ECX + 0x23b],0xffec
0048B5A0  66 89 B1 3F 02 00 00      MOV word ptr [ECX + 0x23f],SI
0048B5A7  66 89 99 41 02 00 00      MOV word ptr [ECX + 0x241],BX
0048B5AE  66 C7 81 43 02 00 00 14 00  MOV word ptr [ECX + 0x243],0x14
0048B5B7  66 89 B1 47 02 00 00      MOV word ptr [ECX + 0x247],SI
0048B5BE  BE 1E 00 00 00            MOV ESI,0x1e
0048B5C3  66 89 B1 49 02 00 00      MOV word ptr [ECX + 0x249],SI
0048B5CA  BF 2D 00 00 00            MOV EDI,0x2d
0048B5CF  66 C7 81 4B 02 00 00 F1 FF  MOV word ptr [ECX + 0x24b],0xfff1
0048B5D8  66 89 B9 4F 02 00 00      MOV word ptr [ECX + 0x24f],DI
0048B5DF  66 89 B9 57 02 00 00      MOV word ptr [ECX + 0x257],DI
0048B5E6  66 89 81 5B 02 00 00      MOV word ptr [ECX + 0x25b],AX
0048B5ED  66 89 81 A6 02 00 00      MOV word ptr [ECX + 0x2a6],AX
0048B5F4  66 89 81 A8 02 00 00      MOV word ptr [ECX + 0x2a8],AX
0048B5FB  66 89 B1 51 02 00 00      MOV word ptr [ECX + 0x251],SI
0048B602  66 89 B1 5F 02 00 00      MOV word ptr [ECX + 0x25f],SI
0048B609  BA 83 FF FF FF            MOV EDX,0xffffff83
0048B60E  B8 21 00 00 00            MOV EAX,0x21
0048B613  5F                        POP EDI
0048B614  5E                        POP ESI
0048B615  66 C7 81 53 02 00 00 0F 00  MOV word ptr [ECX + 0x253],0xf
0048B61E  66 C7 81 59 02 00 00 55 00  MOV word ptr [ECX + 0x259],0x55
0048B627  C6 81 B2 02 00 00 01      MOV byte ptr [ECX + 0x2b2],0x1
0048B62E  66 C7 81 AA 02 00 00 DF FF  MOV word ptr [ECX + 0x2aa],0xffdf
0048B637  C6 81 BF 02 00 00 02      MOV byte ptr [ECX + 0x2bf],0x2
0048B63E  66 89 91 B3 02 00 00      MOV word ptr [ECX + 0x2b3],DX
0048B645  66 C7 81 B5 02 00 00 28 00  MOV word ptr [ECX + 0x2b5],0x28
0048B64E  66 89 81 B7 02 00 00      MOV word ptr [ECX + 0x2b7],AX
0048B655  66 89 91 B9 02 00 00      MOV word ptr [ECX + 0x2b9],DX
0048B65C  66 C7 81 BB 02 00 00 D8 FF  MOV word ptr [ECX + 0x2bb],0xffd8
0048B665  66 89 81 BD 02 00 00      MOV word ptr [ECX + 0x2bd],AX
0048B66C  5B                        POP EBX
0048B66D  C3                        RET
switchD_0048a923::caseD_13:
0048B66E  33 C0                     XOR EAX,EAX
0048B670  BA BA FF FF FF            MOV EDX,0xffffffba
0048B675  66 89 81 31 02 00 00      MOV word ptr [ECX + 0x231],AX
0048B67C  66 89 81 33 02 00 00      MOV word ptr [ECX + 0x233],AX
0048B683  66 C7 81 37 02 00 00 8C 00  MOV word ptr [ECX + 0x237],0x8c
0048B68C  C6 81 81 02 00 00 09      MOV byte ptr [ECX + 0x281],0x9
0048B693  BB C9 FF FF FF            MOV EBX,0xffffffc9
0048B698  66 89 91 39 02 00 00      MOV word ptr [ECX + 0x239],DX
0048B69F  BE 37 00 00 00            MOV ESI,0x37
0048B6A4  66 89 99 3B 02 00 00      MOV word ptr [ECX + 0x23b],BX
0048B6AB  66 89 B1 3F 02 00 00      MOV word ptr [ECX + 0x23f],SI
0048B6B2  66 89 81 41 02 00 00      MOV word ptr [ECX + 0x241],AX
0048B6B9  66 89 99 43 02 00 00      MOV word ptr [ECX + 0x243],BX
0048B6C0  BF 46 00 00 00            MOV EDI,0x46
0048B6C5  66 89 B1 47 02 00 00      MOV word ptr [ECX + 0x247],SI
0048B6CC  66 89 B9 49 02 00 00      MOV word ptr [ECX + 0x249],DI
0048B6D3  66 C7 81 4B 02 00 00 BF FF  MOV word ptr [ECX + 0x24b],0xffbf
0048B6DC  66 89 81 53 02 00 00      MOV word ptr [ECX + 0x253],AX
0048B6E3  66 89 81 59 02 00 00      MOV word ptr [ECX + 0x259],AX
0048B6EA  66 89 81 5B 02 00 00      MOV word ptr [ECX + 0x25b],AX
0048B6F1  BB 41 00 00 00            MOV EBX,0x41
0048B6F6  66 89 81 63 02 00 00      MOV word ptr [ECX + 0x263],AX
0048B6FD  66 89 91 69 02 00 00      MOV word ptr [ECX + 0x269],DX
0048B704  66 89 81 71 02 00 00      MOV word ptr [ECX + 0x271],AX
0048B70B  66 89 B9 79 02 00 00      MOV word ptr [ECX + 0x279],DI
0048B712  66 89 B1 4F 02 00 00      MOV word ptr [ECX + 0x24f],SI
0048B719  66 89 B1 57 02 00 00      MOV word ptr [ECX + 0x257],SI
0048B720  66 89 B1 5F 02 00 00      MOV word ptr [ECX + 0x25f],SI
0048B727  66 89 B1 67 02 00 00      MOV word ptr [ECX + 0x267],SI
0048B72E  66 89 B1 6B 02 00 00      MOV word ptr [ECX + 0x26b],SI
0048B735  66 89 B1 6F 02 00 00      MOV word ptr [ECX + 0x26f],SI
0048B73C  66 89 B1 73 02 00 00      MOV word ptr [ECX + 0x273],SI
0048B743  66 89 B1 77 02 00 00      MOV word ptr [ECX + 0x277],SI
0048B74A  66 89 B1 7F 02 00 00      MOV word ptr [ECX + 0x27f],SI
0048B751  BA 7E FF FF FF            MOV EDX,0xffffff7e
0048B756  B8 E3 FF FF FF            MOV EAX,0xffffffe3
0048B75B  5F                        POP EDI
0048B75C  66 89 99 61 02 00 00      MOV word ptr [ECX + 0x261],BX
0048B763  66 89 99 7B 02 00 00      MOV word ptr [ECX + 0x27b],BX
0048B76A  5E                        POP ESI
0048B76B  66 C7 81 51 02 00 00 C4 FF  MOV word ptr [ECX + 0x251],0xffc4
0048B774  C6 81 BF 02 00 00 02      MOV byte ptr [ECX + 0x2bf],0x2
0048B77B  66 89 91 B3 02 00 00      MOV word ptr [ECX + 0x2b3],DX
0048B782  66 C7 81 B5 02 00 00 5F 00  MOV word ptr [ECX + 0x2b5],0x5f
0048B78B  66 89 81 B7 02 00 00      MOV word ptr [ECX + 0x2b7],AX
0048B792  66 89 91 B9 02 00 00      MOV word ptr [ECX + 0x2b9],DX
0048B799  66 C7 81 BB 02 00 00 A1 FF  MOV word ptr [ECX + 0x2bb],0xffa1
0048B7A2  66 89 81 BD 02 00 00      MOV word ptr [ECX + 0x2bd],AX
0048B7A9  5B                        POP EBX
0048B7AA  C3                        RET
switchD_0048a923::caseD_c:
0048B7AB  33 C0                     XOR EAX,EAX
0048B7AD  BE A6 FF FF FF            MOV ESI,0xffffffa6
0048B7B2  66 89 81 31 02 00 00      MOV word ptr [ECX + 0x231],AX
0048B7B9  66 89 81 33 02 00 00      MOV word ptr [ECX + 0x233],AX
0048B7C0  66 C7 81 37 02 00 00 87 00  MOV word ptr [ECX + 0x237],0x87
0048B7C9  C6 81 81 02 00 00 09      MOV byte ptr [ECX + 0x281],0x9
0048B7D0  BB E2 FF FF FF            MOV EBX,0xffffffe2
0048B7D5  66 89 B1 39 02 00 00      MOV word ptr [ECX + 0x239],SI
0048B7DC  BA 28 00 00 00            MOV EDX,0x28
0048B7E1  66 89 99 3B 02 00 00      MOV word ptr [ECX + 0x23b],BX
0048B7E8  66 89 91 3F 02 00 00      MOV word ptr [ECX + 0x23f],DX
0048B7EF  66 89 B1 41 02 00 00      MOV word ptr [ECX + 0x241],SI
0048B7F6  BE 1E 00 00 00            MOV ESI,0x1e
0048B7FB  BF CE FF FF FF            MOV EDI,0xffffffce
0048B800  66 89 B1 43 02 00 00      MOV word ptr [ECX + 0x243],SI
0048B807  66 89 91 47 02 00 00      MOV word ptr [ECX + 0x247],DX
0048B80E  66 89 B9 49 02 00 00      MOV word ptr [ECX + 0x249],DI
0048B815  66 89 99 4B 02 00 00      MOV word ptr [ECX + 0x24b],BX
0048B81C  66 89 91 4F 02 00 00      MOV word ptr [ECX + 0x24f],DX
0048B823  66 89 B9 51 02 00 00      MOV word ptr [ECX + 0x251],DI
0048B82A  66 89 B1 53 02 00 00      MOV word ptr [ECX + 0x253],SI
0048B831  BE 05 00 00 00            MOV ESI,0x5
0048B836  BF D8 FF FF FF            MOV EDI,0xffffffd8
0048B83B  66 89 91 57 02 00 00      MOV word ptr [ECX + 0x257],DX
0048B842  66 89 91 63 02 00 00      MOV word ptr [ECX + 0x263],DX
0048B849  66 89 91 73 02 00 00      MOV word ptr [ECX + 0x273],DX
0048B850  66 89 B1 59 02 00 00      MOV word ptr [ECX + 0x259],SI
0048B857  66 89 B9 5B 02 00 00      MOV word ptr [ECX + 0x25b],DI
0048B85E  66 89 B1 61 02 00 00      MOV word ptr [ECX + 0x261],SI
0048B865  66 89 B9 6B 02 00 00      MOV word ptr [ECX + 0x26b],DI
0048B86C  66 89 81 7B 02 00 00      MOV word ptr [ECX + 0x27b],AX
0048B873  BA 23 00 00 00            MOV EDX,0x23
0048B878  BB 32 00 00 00            MOV EBX,0x32
0048B87D  BE 37 00 00 00            MOV ESI,0x37
0048B882  BF 2D 00 00 00            MOV EDI,0x2d
0048B887  B8 79 FF FF FF            MOV EAX,0xffffff79
0048B88C  66 89 91 7F 02 00 00      MOV word ptr [ECX + 0x27f],DX
0048B893  66 89 91 B5 02 00 00      MOV word ptr [ECX + 0x2b5],DX
0048B89A  66 89 99 5F 02 00 00      MOV word ptr [ECX + 0x25f],BX
0048B8A1  66 89 99 67 02 00 00      MOV word ptr [ECX + 0x267],BX
0048B8A8  66 89 B1 69 02 00 00      MOV word ptr [ECX + 0x269],SI
0048B8AF  66 89 B9 6F 02 00 00      MOV word ptr [ECX + 0x26f],DI
0048B8B6  66 89 B1 71 02 00 00      MOV word ptr [ECX + 0x271],SI
0048B8BD  66 89 B9 77 02 00 00      MOV word ptr [ECX + 0x277],DI
0048B8C4  66 C7 81 79 02 00 00 64 00  MOV word ptr [ECX + 0x279],0x64
0048B8CD  C6 81 BF 02 00 00 02      MOV byte ptr [ECX + 0x2bf],0x2
0048B8D4  66 89 81 B3 02 00 00      MOV word ptr [ECX + 0x2b3],AX
0048B8DB  BA 10 00 00 00            MOV EDX,0x10
LAB_0048b8e0:
0048B8E0  66 89 91 B7 02 00 00      MOV word ptr [ECX + 0x2b7],DX
0048B8E7  66 89 81 B9 02 00 00      MOV word ptr [ECX + 0x2b9],AX
LAB_0048b8ee:
0048B8EE  5F                        POP EDI
0048B8EF  5E                        POP ESI
0048B8F0  66 C7 81 BB 02 00 00 DD FF  MOV word ptr [ECX + 0x2bb],0xffdd
0048B8F9  66 89 91 BD 02 00 00      MOV word ptr [ECX + 0x2bd],DX
0048B900  5B                        POP EBX
0048B901  C3                        RET
switchD_0048a923::caseD_17:
0048B902  33 C0                     XOR EAX,EAX
0048B904  BA 28 00 00 00            MOV EDX,0x28
0048B909  66 89 81 31 02 00 00      MOV word ptr [ECX + 0x231],AX
0048B910  66 89 81 33 02 00 00      MOV word ptr [ECX + 0x233],AX
0048B917  66 C7 81 37 02 00 00 78 00  MOV word ptr [ECX + 0x237],0x78
0048B920  C6 81 81 02 00 00 06      MOV byte ptr [ECX + 0x281],0x6
0048B927  66 C7 81 39 02 00 00 C9 FF  MOV word ptr [ECX + 0x239],0xffc9
0048B930  66 89 81 3B 02 00 00      MOV word ptr [ECX + 0x23b],AX
0048B937  BF BA FF FF FF            MOV EDI,0xffffffba
0048B93C  66 89 91 3F 02 00 00      MOV word ptr [ECX + 0x23f],DX
0048B943  66 89 B9 41 02 00 00      MOV word ptr [ECX + 0x241],DI
0048B94A  BE 23 00 00 00            MOV ESI,0x23
0048B94F  66 C7 81 43 02 00 00 D8 FF  MOV word ptr [ECX + 0x243],0xffd8
0048B958  66 89 B1 47 02 00 00      MOV word ptr [ECX + 0x247],SI
0048B95F  66 89 B9 49 02 00 00      MOV word ptr [ECX + 0x249],DI
0048B966  66 89 91 4B 02 00 00      MOV word ptr [ECX + 0x24b],DX
0048B96D  66 89 B1 4F 02 00 00      MOV word ptr [ECX + 0x24f],SI
0048B974  BE 1E 00 00 00            MOV ESI,0x1e
0048B979  66 89 B1 59 02 00 00      MOV word ptr [ECX + 0x259],SI
0048B980  66 89 B1 61 02 00 00      MOV word ptr [ECX + 0x261],SI
0048B987  BF 46 00 00 00            MOV EDI,0x46
0048B98C  66 89 B1 A8 02 00 00      MOV word ptr [ECX + 0x2a8],SI
0048B993  BE DF FF FF FF            MOV ESI,0xffffffdf
0048B998  66 89 81 53 02 00 00      MOV word ptr [ECX + 0x253],AX
0048B99F  66 89 91 57 02 00 00      MOV word ptr [ECX + 0x257],DX
0048B9A6  BB 32 00 00 00            MOV EBX,0x32
0048B9AB  66 89 B9 A6 02 00 00      MOV word ptr [ECX + 0x2a6],DI
0048B9B2  66 89 B9 AC 02 00 00      MOV word ptr [ECX + 0x2ac],DI
0048B9B9  66 89 B1 AA 02 00 00      MOV word ptr [ECX + 0x2aa],SI
0048B9C0  66 89 B1 B0 02 00 00      MOV word ptr [ECX + 0x2b0],SI
0048B9C7  B8 92 FF FF FF            MOV EAX,0xffffff92
0048B9CC  BA 1A 00 00 00            MOV EDX,0x1a
0048B9D1  5F                        POP EDI
0048B9D2  66 89 99 5F 02 00 00      MOV word ptr [ECX + 0x25f],BX
0048B9D9  66 89 99 67 02 00 00      MOV word ptr [ECX + 0x267],BX
0048B9E0  66 89 99 B5 02 00 00      MOV word ptr [ECX + 0x2b5],BX
0048B9E7  5E                        POP ESI
0048B9E8  66 C7 81 51 02 00 00 E2 FF  MOV word ptr [ECX + 0x251],0xffe2
0048B9F1  66 C7 81 5B 02 00 00 F1 FF  MOV word ptr [ECX + 0x25b],0xfff1
0048B9FA  66 C7 81 63 02 00 00 0F 00  MOV word ptr [ECX + 0x263],0xf
0048BA03  C6 81 B2 02 00 00 02      MOV byte ptr [ECX + 0x2b2],0x2
0048BA0A  66 C7 81 AE 02 00 00 E2 FF  MOV word ptr [ECX + 0x2ae],0xffe2
0048BA13  C6 81 BF 02 00 00 02      MOV byte ptr [ECX + 0x2bf],0x2
0048BA1A  66 89 81 B3 02 00 00      MOV word ptr [ECX + 0x2b3],AX
0048BA21  66 89 91 B7 02 00 00      MOV word ptr [ECX + 0x2b7],DX
0048BA28  66 89 81 B9 02 00 00      MOV word ptr [ECX + 0x2b9],AX
0048BA2F  66 C7 81 BB 02 00 00 CE FF  MOV word ptr [ECX + 0x2bb],0xffce
0048BA38  66 89 91 BD 02 00 00      MOV word ptr [ECX + 0x2bd],DX
0048BA3F  5B                        POP EBX
0048BA40  C3                        RET
switchD_0048a923::caseD_a:
0048BA41  33 C0                     XOR EAX,EAX
0048BA43  BA BF FF FF FF            MOV EDX,0xffffffbf
0048BA48  66 89 81 31 02 00 00      MOV word ptr [ECX + 0x231],AX
0048BA4F  66 89 81 33 02 00 00      MOV word ptr [ECX + 0x233],AX
0048BA56  66 C7 81 37 02 00 00 69 00  MOV word ptr [ECX + 0x237],0x69
0048BA5F  C6 81 81 02 00 00 07      MOV byte ptr [ECX + 0x281],0x7
0048BA66  BB EC FF FF FF            MOV EBX,0xffffffec
0048BA6B  66 89 91 39 02 00 00      MOV word ptr [ECX + 0x239],DX
0048BA72  BE 23 00 00 00            MOV ESI,0x23
0048BA77  66 89 99 3B 02 00 00      MOV word ptr [ECX + 0x23b],BX
0048BA7E  66 89 B1 3F 02 00 00      MOV word ptr [ECX + 0x23f],SI
0048BA85  BF 14 00 00 00            MOV EDI,0x14
0048BA8A  66 89 91 41 02 00 00      MOV word ptr [ECX + 0x241],DX
0048BA91  66 89 B9 43 02 00 00      MOV word ptr [ECX + 0x243],DI
0048BA98  BA FB FF FF FF            MOV EDX,0xfffffffb
0048BA9D  66 89 B1 47 02 00 00      MOV word ptr [ECX + 0x247],SI
0048BAA4  66 89 91 49 02 00 00      MOV word ptr [ECX + 0x249],DX
0048BAAB  66 89 99 4B 02 00 00      MOV word ptr [ECX + 0x24b],BX
0048BAB2  66 89 B1 4F 02 00 00      MOV word ptr [ECX + 0x24f],SI
0048BAB9  66 89 91 51 02 00 00      MOV word ptr [ECX + 0x251],DX
0048BAC0  BA 19 00 00 00            MOV EDX,0x19
0048BAC5  66 89 81 6B 02 00 00      MOV word ptr [ECX + 0x26b],AX
0048BACC  66 89 91 5F 02 00 00      MOV word ptr [ECX + 0x25f],DX
0048BAD3  66 89 91 67 02 00 00      MOV word ptr [ECX + 0x267],DX
0048BADA  66 89 91 6F 02 00 00      MOV word ptr [ECX + 0x26f],DX
0048BAE1  66 89 81 A8 02 00 00      MOV word ptr [ECX + 0x2a8],AX
0048BAE8  BB 32 00 00 00            MOV EBX,0x32
0048BAED  B8 21 00 00 00            MOV EAX,0x21
0048BAF2  BA 8D FF FF FF            MOV EDX,0xffffff8d
0048BAF7  66 89 B9 53 02 00 00      MOV word ptr [ECX + 0x253],DI
0048BAFE  66 89 B1 57 02 00 00      MOV word ptr [ECX + 0x257],SI
0048BB05  66 89 99 59 02 00 00      MOV word ptr [ECX + 0x259],BX
0048BB0C  66 C7 81 5B 02 00 00 F1 FF  MOV word ptr [ECX + 0x25b],0xfff1
0048BB15  66 89 99 61 02 00 00      MOV word ptr [ECX + 0x261],BX
0048BB1C  66 C7 81 63 02 00 00 0F 00  MOV word ptr [ECX + 0x263],0xf
0048BB25  66 C7 81 69 02 00 00 55 00  MOV word ptr [ECX + 0x269],0x55
0048BB2E  C6 81 B2 02 00 00 01      MOV byte ptr [ECX + 0x2b2],0x1
0048BB35  66 C7 81 A6 02 00 00 3C 00  MOV word ptr [ECX + 0x2a6],0x3c
0048BB3E  66 89 81 AA 02 00 00      MOV word ptr [ECX + 0x2aa],AX
0048BB45  C6 81 BF 02 00 00 02      MOV byte ptr [ECX + 0x2bf],0x2
0048BB4C  66 89 91 B3 02 00 00      MOV word ptr [ECX + 0x2b3],DX
0048BB53  66 89 B1 B5 02 00 00      MOV word ptr [ECX + 0x2b5],SI
LAB_0048bb5a:
0048BB5A  5F                        POP EDI
0048BB5B  5E                        POP ESI
0048BB5C  66 89 81 B7 02 00 00      MOV word ptr [ECX + 0x2b7],AX
0048BB63  66 89 91 B9 02 00 00      MOV word ptr [ECX + 0x2b9],DX
0048BB6A  66 C7 81 BB 02 00 00 DD FF  MOV word ptr [ECX + 0x2bb],0xffdd
0048BB73  66 89 81 BD 02 00 00      MOV word ptr [ECX + 0x2bd],AX
0048BB7A  5B                        POP EBX
0048BB7B  C3                        RET
switchD_0048a923::caseD_16:
0048BB7C  33 C0                     XOR EAX,EAX
0048BB7E  BB 32 00 00 00            MOV EBX,0x32
0048BB83  66 89 81 31 02 00 00      MOV word ptr [ECX + 0x231],AX
0048BB8A  66 89 81 33 02 00 00      MOV word ptr [ECX + 0x233],AX
0048BB91  66 C7 81 37 02 00 00 6E 00  MOV word ptr [ECX + 0x237],0x6e
0048BB9A  C6 81 81 02 00 00 04      MOV byte ptr [ECX + 0x281],0x4
0048BBA1  66 C7 81 39 02 00 00 C9 FF  MOV word ptr [ECX + 0x239],0xffc9
0048BBAA  66 89 81 3B 02 00 00      MOV word ptr [ECX + 0x23b],AX
0048BBB1  BA 19 00 00 00            MOV EDX,0x19
0048BBB6  66 89 99 3F 02 00 00      MOV word ptr [ECX + 0x23f],BX
0048BBBD  BF E2 FF FF FF            MOV EDI,0xffffffe2
0048BBC2  66 89 91 41 02 00 00      MOV word ptr [ECX + 0x241],DX
0048BBC9  66 89 B9 43 02 00 00      MOV word ptr [ECX + 0x243],DI
0048BBD0  66 89 99 47 02 00 00      MOV word ptr [ECX + 0x247],BX
0048BBD7  BE 1E 00 00 00            MOV ESI,0x1e
0048BBDC  66 89 91 49 02 00 00      MOV word ptr [ECX + 0x249],DX
0048BBE3  66 89 B1 4B 02 00 00      MOV word ptr [ECX + 0x24b],SI
0048BBEA  BA 28 00 00 00            MOV EDX,0x28
0048BBEF  66 89 B1 A8 02 00 00      MOV word ptr [ECX + 0x2a8],SI
0048BBF6  BE DF FF FF FF            MOV ESI,0xffffffdf
0048BBFB  66 89 81 53 02 00 00      MOV word ptr [ECX + 0x253],AX
0048BC02  66 89 91 A6 02 00 00      MOV word ptr [ECX + 0x2a6],DX
0048BC09  66 89 91 AC 02 00 00      MOV word ptr [ECX + 0x2ac],DX
0048BC10  66 89 B9 AE 02 00 00      MOV word ptr [ECX + 0x2ae],DI
0048BC17  66 89 99 4F 02 00 00      MOV word ptr [ECX + 0x24f],BX
0048BC1E  66 89 B1 AA 02 00 00      MOV word ptr [ECX + 0x2aa],SI
0048BC25  66 89 B1 B0 02 00 00      MOV word ptr [ECX + 0x2b0],SI
0048BC2C  B8 92 FF FF FF            MOV EAX,0xffffff92
0048BC31  BA 03 00 00 00            MOV EDX,0x3
0048BC36  5F                        POP EDI
0048BC37  66 89 99 51 02 00 00      MOV word ptr [ECX + 0x251],BX
0048BC3E  5E                        POP ESI
0048BC3F  66 C7 81 57 02 00 00 2D 00  MOV word ptr [ECX + 0x257],0x2d
0048BC48  C6 81 B2 02 00 00 02      MOV byte ptr [ECX + 0x2b2],0x2
0048BC4F  C6 81 BF 02 00 00 02      MOV byte ptr [ECX + 0x2bf],0x2
0048BC56  66 89 81 B3 02 00 00      MOV word ptr [ECX + 0x2b3],AX
0048BC5D  66 C7 81 B5 02 00 00 0F 00  MOV word ptr [ECX + 0x2b5],0xf
0048BC66  66 89 91 B7 02 00 00      MOV word ptr [ECX + 0x2b7],DX
0048BC6D  66 89 81 B9 02 00 00      MOV word ptr [ECX + 0x2b9],AX
0048BC74  66 C7 81 BB 02 00 00 F1 FF  MOV word ptr [ECX + 0x2bb],0xfff1
0048BC7D  66 89 91 BD 02 00 00      MOV word ptr [ECX + 0x2bd],DX
0048BC84  5B                        POP EBX
0048BC85  C3                        RET
switchD_0048a923::caseD_b:
0048BC86  33 C0                     XOR EAX,EAX
0048BC88  BE BA FF FF FF            MOV ESI,0xffffffba
0048BC8D  66 89 81 31 02 00 00      MOV word ptr [ECX + 0x231],AX
0048BC94  66 89 81 33 02 00 00      MOV word ptr [ECX + 0x233],AX
0048BC9B  66 C7 81 37 02 00 00 78 00  MOV word ptr [ECX + 0x237],0x78
0048BCA4  C6 81 81 02 00 00 06      MOV byte ptr [ECX + 0x281],0x6
0048BCAB  66 89 B1 39 02 00 00      MOV word ptr [ECX + 0x239],SI
0048BCB2  BA 28 00 00 00            MOV EDX,0x28
0048BCB7  66 C7 81 3B 02 00 00 E7 FF  MOV word ptr [ECX + 0x23b],0xffe7
0048BCC0  66 89 91 3F 02 00 00      MOV word ptr [ECX + 0x23f],DX
0048BCC7  66 89 B1 41 02 00 00      MOV word ptr [ECX + 0x241],SI
0048BCCE  66 C7 81 43 02 00 00 19 00  MOV word ptr [ECX + 0x243],0x19
0048BCD7  BE F6 FF FF FF            MOV ESI,0xfffffff6
0048BCDC  66 89 91 47 02 00 00      MOV word ptr [ECX + 0x247],DX
0048BCE3  66 89 B1 49 02 00 00      MOV word ptr [ECX + 0x249],SI
0048BCEA  BF 2D 00 00 00            MOV EDI,0x2d
0048BCEF  66 C7 81 4B 02 00 00 E2 FF  MOV word ptr [ECX + 0x24b],0xffe2
0048BCF8  66 89 B9 4F 02 00 00      MOV word ptr [ECX + 0x24f],DI
0048BCFF  66 89 B1 51 02 00 00      MOV word ptr [ECX + 0x251],SI
0048BD06  66 89 91 5F 02 00 00      MOV word ptr [ECX + 0x25f],DX
0048BD0D  BE 1E 00 00 00            MOV ESI,0x1e
0048BD12  BA 90 FF FF FF            MOV EDX,0xffffff90
0048BD17  66 89 B1 53 02 00 00      MOV word ptr [ECX + 0x253],SI
0048BD1E  66 89 B9 57 02 00 00      MOV word ptr [ECX + 0x257],DI
0048BD25  66 C7 81 59 02 00 00 32 00  MOV word ptr [ECX + 0x259],0x32
0048BD2E  66 89 81 5B 02 00 00      MOV word ptr [ECX + 0x25b],AX
0048BD35  66 C7 81 61 02 00 00 5F 00  MOV word ptr [ECX + 0x261],0x5f
0048BD3E  66 89 81 63 02 00 00      MOV word ptr [ECX + 0x263],AX
0048BD45  66 89 B1 67 02 00 00      MOV word ptr [ECX + 0x267],SI
0048BD4C  C6 81 B2 02 00 00 01      MOV byte ptr [ECX + 0x2b2],0x1
0048BD53  66 89 81 A6 02 00 00      MOV word ptr [ECX + 0x2a6],AX
0048BD5A  66 89 81 A8 02 00 00      MOV word ptr [ECX + 0x2a8],AX
0048BD61  66 C7 81 AA 02 00 00 DF FF  MOV word ptr [ECX + 0x2aa],0xffdf
0048BD6A  C6 81 BF 02 00 00 02      MOV byte ptr [ECX + 0x2bf],0x2
0048BD71  66 89 91 B3 02 00 00      MOV word ptr [ECX + 0x2b3],DX
0048BD78  66 C7 81 B5 02 00 00 23 00  MOV word ptr [ECX + 0x2b5],0x23
0048BD81  E9 D4 FD FF FF            JMP 0x0048bb5a
switchD_0048a923::caseD_19:
0048BD86  33 C0                     XOR EAX,EAX
0048BD88  BA 28 00 00 00            MOV EDX,0x28
0048BD8D  66 89 81 31 02 00 00      MOV word ptr [ECX + 0x231],AX
0048BD94  66 89 81 33 02 00 00      MOV word ptr [ECX + 0x233],AX
0048BD9B  66 C7 81 37 02 00 00 5A 00  MOV word ptr [ECX + 0x237],0x5a
0048BDA4  C6 81 81 02 00 00 03      MOV byte ptr [ECX + 0x281],0x3
0048BDAB  66 C7 81 39 02 00 00 CE FF  MOV word ptr [ECX + 0x239],0xffce
0048BDB4  66 89 81 3B 02 00 00      MOV word ptr [ECX + 0x23b],AX
0048BDBB  66 89 91 3F 02 00 00      MOV word ptr [ECX + 0x23f],DX
0048BDC2  66 89 81 41 02 00 00      MOV word ptr [ECX + 0x241],AX
0048BDC9  66 89 81 43 02 00 00      MOV word ptr [ECX + 0x243],AX
0048BDD0  66 89 91 47 02 00 00      MOV word ptr [ECX + 0x247],DX
0048BDD7  66 C7 81 49 02 00 00 32 00  MOV word ptr [ECX + 0x249],0x32
0048BDE0  66 89 81 4B 02 00 00      MOV word ptr [ECX + 0x24b],AX
0048BDE7  66 89 91 4F 02 00 00      MOV word ptr [ECX + 0x24f],DX
0048BDEE  88 81 B2 02 00 00         MOV byte ptr [ECX + 0x2b2],AL
0048BDF4  E9 9F 06 00 00            JMP 0x0048c498
switchD_0048a923::caseD_21:
0048BDF9  33 C0                     XOR EAX,EAX
0048BDFB  BE C4 FF FF FF            MOV ESI,0xffffffc4
0048BE00  66 89 81 31 02 00 00      MOV word ptr [ECX + 0x231],AX
0048BE07  66 89 81 33 02 00 00      MOV word ptr [ECX + 0x233],AX
0048BE0E  66 C7 81 37 02 00 00 64 00  MOV word ptr [ECX + 0x237],0x64
0048BE17  C6 81 81 02 00 00 03      MOV byte ptr [ECX + 0x281],0x3
0048BE1E  66 89 B1 39 02 00 00      MOV word ptr [ECX + 0x239],SI
0048BE25  BA 28 00 00 00            MOV EDX,0x28
0048BE2A  66 C7 81 3B 02 00 00 E2 FF  MOV word ptr [ECX + 0x23b],0xffe2
0048BE33  66 89 91 3F 02 00 00      MOV word ptr [ECX + 0x23f],DX
0048BE3A  66 89 B1 41 02 00 00      MOV word ptr [ECX + 0x241],SI
0048BE41  66 C7 81 43 02 00 00 1E 00  MOV word ptr [ECX + 0x243],0x1e
0048BE4A  66 89 91 47 02 00 00      MOV word ptr [ECX + 0x247],DX
0048BE51  66 C7 81 49 02 00 00 0A 00  MOV word ptr [ECX + 0x249],0xa
0048BE5A  66 89 81 4B 02 00 00      MOV word ptr [ECX + 0x24b],AX
0048BE61  66 C7 81 4F 02 00 00 50 00  MOV word ptr [ECX + 0x24f],0x50
0048BE6A  E9 22 06 00 00            JMP 0x0048c491
switchD_0048a923::caseD_1f:
0048BE6F  33 C0                     XOR EAX,EAX
0048BE71  66 89 81 31 02 00 00      MOV word ptr [ECX + 0x231],AX
0048BE78  66 89 81 33 02 00 00      MOV word ptr [ECX + 0x233],AX
0048BE7F  66 C7 81 37 02 00 00 64 00  MOV word ptr [ECX + 0x237],0x64
0048BE88  C6 81 81 02 00 00 02      MOV byte ptr [ECX + 0x281],0x2
0048BE8F  66 C7 81 39 02 00 00 C9 FF  MOV word ptr [ECX + 0x239],0xffc9
0048BE98  66 89 81 3B 02 00 00      MOV word ptr [ECX + 0x23b],AX
0048BE9F  66 C7 81 3F 02 00 00 32 00  MOV word ptr [ECX + 0x23f],0x32
0048BEA8  66 C7 81 41 02 00 00 19 00  MOV word ptr [ECX + 0x241],0x19
0048BEB1  66 89 81 43 02 00 00      MOV word ptr [ECX + 0x243],AX
0048BEB8  66 C7 81 47 02 00 00 50 00  MOV word ptr [ECX + 0x247],0x50
0048BEC1  E9 CB 05 00 00            JMP 0x0048c491
switchD_0048a923::caseD_24:
0048BEC6  33 C0                     XOR EAX,EAX
0048BEC8  BA 28 00 00 00            MOV EDX,0x28
0048BECD  66 89 81 31 02 00 00      MOV word ptr [ECX + 0x231],AX
0048BED4  66 89 81 33 02 00 00      MOV word ptr [ECX + 0x233],AX
0048BEDB  E9 38 03 00 00            JMP 0x0048c218
switchD_0048a923::caseD_20:
0048BEE0  33 C0                     XOR EAX,EAX
0048BEE2  BE 1E 00 00 00            MOV ESI,0x1e
0048BEE7  66 89 81 31 02 00 00      MOV word ptr [ECX + 0x231],AX
0048BEEE  66 89 81 33 02 00 00      MOV word ptr [ECX + 0x233],AX
0048BEF5  66 C7 81 37 02 00 00 64 00  MOV word ptr [ECX + 0x237],0x64
0048BEFE  C6 81 81 02 00 00 04      MOV byte ptr [ECX + 0x281],0x4
0048BF05  66 C7 81 39 02 00 00 32 00  MOV word ptr [ECX + 0x239],0x32
0048BF0E  66 89 81 3B 02 00 00      MOV word ptr [ECX + 0x23b],AX
0048BF15  66 89 B1 3F 02 00 00      MOV word ptr [ECX + 0x23f],SI
0048BF1C  66 89 81 41 02 00 00      MOV word ptr [ECX + 0x241],AX
0048BF23  66 89 81 43 02 00 00      MOV word ptr [ECX + 0x243],AX
0048BF2A  BA BF FF FF FF            MOV EDX,0xffffffbf
0048BF2F  66 89 B1 47 02 00 00      MOV word ptr [ECX + 0x247],SI
0048BF36  66 89 91 49 02 00 00      MOV word ptr [ECX + 0x249],DX
0048BF3D  BE 23 00 00 00            MOV ESI,0x23
0048BF42  66 C7 81 4B 02 00 00 F1 FF  MOV word ptr [ECX + 0x24b],0xfff1
0048BF4B  66 89 B1 4F 02 00 00      MOV word ptr [ECX + 0x24f],SI
0048BF52  66 89 91 51 02 00 00      MOV word ptr [ECX + 0x251],DX
0048BF59  66 C7 81 53 02 00 00 0F 00  MOV word ptr [ECX + 0x253],0xf
0048BF62  66 89 B1 57 02 00 00      MOV word ptr [ECX + 0x257],SI
0048BF69  E9 23 05 00 00            JMP 0x0048c491
switchD_0048a923::caseD_23:
0048BF6E  33 C0                     XOR EAX,EAX
0048BF70  BA 5A 00 00 00            MOV EDX,0x5a
0048BF75  66 89 81 31 02 00 00      MOV word ptr [ECX + 0x231],AX
0048BF7C  66 89 81 33 02 00 00      MOV word ptr [ECX + 0x233],AX
0048BF83  B3 01                     MOV BL,0x1
0048BF85  66 89 91 37 02 00 00      MOV word ptr [ECX + 0x237],DX
0048BF8C  88 99 81 02 00 00         MOV byte ptr [ECX + 0x281],BL
0048BF92  66 89 81 39 02 00 00      MOV word ptr [ECX + 0x239],AX
0048BF99  66 89 81 3B 02 00 00      MOV word ptr [ECX + 0x23b],AX
0048BFA0  66 89 91 3F 02 00 00      MOV word ptr [ECX + 0x23f],DX
0048BFA7  88 99 B2 02 00 00         MOV byte ptr [ECX + 0x2b2],BL
0048BFAD  E9 E6 04 00 00            JMP 0x0048c498
switchD_0048a923::caseD_1c:
0048BFB2  33 C0                     XOR EAX,EAX
0048BFB4  BA FB FF FF FF            MOV EDX,0xfffffffb
0048BFB9  66 89 81 31 02 00 00      MOV word ptr [ECX + 0x231],AX
0048BFC0  66 89 81 33 02 00 00      MOV word ptr [ECX + 0x233],AX
0048BFC7  66 C7 81 37 02 00 00 5A 00  MOV word ptr [ECX + 0x237],0x5a
0048BFD0  C6 81 81 02 00 00 02      MOV byte ptr [ECX + 0x281],0x2
0048BFD7  66 89 91 39 02 00 00      MOV word ptr [ECX + 0x239],DX
0048BFDE  BE 23 00 00 00            MOV ESI,0x23
0048BFE3  66 C7 81 3B 02 00 00 E2 FF  MOV word ptr [ECX + 0x23b],0xffe2
0048BFEC  66 89 B1 3F 02 00 00      MOV word ptr [ECX + 0x23f],SI
0048BFF3  66 89 91 41 02 00 00      MOV word ptr [ECX + 0x241],DX
0048BFFA  66 C7 81 43 02 00 00 1E 00  MOV word ptr [ECX + 0x243],0x1e
0048C003  66 89 B1 47 02 00 00      MOV word ptr [ECX + 0x247],SI
0048C00A  E9 82 04 00 00            JMP 0x0048c491
switchD_0048a923::caseD_1d:
0048C00F  33 C0                     XOR EAX,EAX
0048C011  BE 1E 00 00 00            MOV ESI,0x1e
0048C016  66 89 81 31 02 00 00      MOV word ptr [ECX + 0x231],AX
0048C01D  66 89 81 33 02 00 00      MOV word ptr [ECX + 0x233],AX
0048C024  66 C7 81 37 02 00 00 64 00  MOV word ptr [ECX + 0x237],0x64
0048C02D  C6 81 81 02 00 00 04      MOV byte ptr [ECX + 0x281],0x4
0048C034  66 C7 81 39 02 00 00 D8 FF  MOV word ptr [ECX + 0x239],0xffd8
0048C03D  66 89 81 3B 02 00 00      MOV word ptr [ECX + 0x23b],AX
0048C044  66 89 B1 3F 02 00 00      MOV word ptr [ECX + 0x23f],SI
0048C04B  66 89 81 41 02 00 00      MOV word ptr [ECX + 0x241],AX
0048C052  66 89 81 43 02 00 00      MOV word ptr [ECX + 0x243],AX
0048C059  66 89 B1 47 02 00 00      MOV word ptr [ECX + 0x247],SI
0048C060  66 C7 81 49 02 00 00 23 00  MOV word ptr [ECX + 0x249],0x23
0048C069  66 89 81 4B 02 00 00      MOV word ptr [ECX + 0x24b],AX
0048C070  66 89 B1 4F 02 00 00      MOV word ptr [ECX + 0x24f],SI
0048C077  66 C7 81 51 02 00 00 3C 00  MOV word ptr [ECX + 0x251],0x3c
0048C080  66 89 81 53 02 00 00      MOV word ptr [ECX + 0x253],AX
0048C087  66 C7 81 57 02 00 00 19 00  MOV word ptr [ECX + 0x257],0x19
0048C090  88 81 B2 02 00 00         MOV byte ptr [ECX + 0x2b2],AL
0048C096  E9 FD 03 00 00            JMP 0x0048c498
switchD_0048a923::caseD_1e:
0048C09B  33 C0                     XOR EAX,EAX
0048C09D  BF 14 00 00 00            MOV EDI,0x14
0048C0A2  66 89 81 31 02 00 00      MOV word ptr [ECX + 0x231],AX
0048C0A9  66 89 81 33 02 00 00      MOV word ptr [ECX + 0x233],AX
0048C0B0  66 C7 81 37 02 00 00 5A 00  MOV word ptr [ECX + 0x237],0x5a
0048C0B9  C6 81 81 02 00 00 04      MOV byte ptr [ECX + 0x281],0x4
0048C0C0  66 C7 81 39 02 00 00 D3 FF  MOV word ptr [ECX + 0x239],0xffd3
0048C0C9  66 89 81 3B 02 00 00      MOV word ptr [ECX + 0x23b],AX
0048C0D0  66 89 B9 3F 02 00 00      MOV word ptr [ECX + 0x23f],DI
0048C0D7  66 C7 81 41 02 00 00 F1 FF  MOV word ptr [ECX + 0x241],0xfff1
0048C0E0  66 89 81 43 02 00 00      MOV word ptr [ECX + 0x243],AX
0048C0E7  BE 1E 00 00 00            MOV ESI,0x1e
0048C0EC  66 89 B9 47 02 00 00      MOV word ptr [ECX + 0x247],DI
0048C0F3  66 89 B1 49 02 00 00      MOV word ptr [ECX + 0x249],SI
0048C0FA  BA 28 00 00 00            MOV EDX,0x28
0048C0FF  66 C7 81 4B 02 00 00 EC FF  MOV word ptr [ECX + 0x24b],0xffec
0048C108  66 89 91 4F 02 00 00      MOV word ptr [ECX + 0x24f],DX
0048C10F  66 89 B1 51 02 00 00      MOV word ptr [ECX + 0x251],SI
0048C116  66 89 B9 53 02 00 00      MOV word ptr [ECX + 0x253],DI
0048C11D  66 89 91 57 02 00 00      MOV word ptr [ECX + 0x257],DX
0048C124  E9 68 03 00 00            JMP 0x0048c491
switchD_0048a923::caseD_1b:
0048C129  33 C0                     XOR EAX,EAX
0048C12B  BF D3 FF FF FF            MOV EDI,0xffffffd3
0048C130  66 89 81 31 02 00 00      MOV word ptr [ECX + 0x231],AX
0048C137  66 89 81 33 02 00 00      MOV word ptr [ECX + 0x233],AX
0048C13E  66 C7 81 37 02 00 00 69 00  MOV word ptr [ECX + 0x237],0x69
0048C147  C6 81 81 02 00 00 03      MOV byte ptr [ECX + 0x281],0x3
0048C14E  66 89 B9 39 02 00 00      MOV word ptr [ECX + 0x239],DI
0048C155  BE 37 00 00 00            MOV ESI,0x37
0048C15A  66 C7 81 3B 02 00 00 D8 FF  MOV word ptr [ECX + 0x23b],0xffd8
0048C163  66 89 B1 3F 02 00 00      MOV word ptr [ECX + 0x23f],SI
0048C16A  BA 28 00 00 00            MOV EDX,0x28
0048C16F  66 89 B9 41 02 00 00      MOV word ptr [ECX + 0x241],DI
0048C176  66 89 91 43 02 00 00      MOV word ptr [ECX + 0x243],DX
0048C17D  66 89 B1 47 02 00 00      MOV word ptr [ECX + 0x247],SI
0048C184  66 89 91 49 02 00 00      MOV word ptr [ECX + 0x249],DX
0048C18B  66 89 81 4B 02 00 00      MOV word ptr [ECX + 0x24b],AX
0048C192  66 C7 81 4F 02 00 00 3C 00  MOV word ptr [ECX + 0x24f],0x3c
0048C19B  88 81 B2 02 00 00         MOV byte ptr [ECX + 0x2b2],AL
0048C1A1  E9 F2 02 00 00            JMP 0x0048c498
switchD_0048a923::caseD_1a:
0048C1A6  33 C0                     XOR EAX,EAX
0048C1A8  66 89 81 31 02 00 00      MOV word ptr [ECX + 0x231],AX
0048C1AF  66 89 81 33 02 00 00      MOV word ptr [ECX + 0x233],AX
0048C1B6  66 C7 81 37 02 00 00 5F 00  MOV word ptr [ECX + 0x237],0x5f
0048C1BF  C6 81 81 02 00 00 02      MOV byte ptr [ECX + 0x281],0x2
0048C1C6  66 C7 81 39 02 00 00 D8 FF  MOV word ptr [ECX + 0x239],0xffd8
0048C1CF  66 89 81 3B 02 00 00      MOV word ptr [ECX + 0x23b],AX
0048C1D6  66 C7 81 3F 02 00 00 32 00  MOV word ptr [ECX + 0x23f],0x32
0048C1DF  66 C7 81 41 02 00 00 2D 00  MOV word ptr [ECX + 0x241],0x2d
0048C1E8  66 89 81 43 02 00 00      MOV word ptr [ECX + 0x243],AX
0048C1EF  66 C7 81 47 02 00 00 37 00  MOV word ptr [ECX + 0x247],0x37
0048C1F8  88 81 B2 02 00 00         MOV byte ptr [ECX + 0x2b2],AL
0048C1FE  E9 95 02 00 00            JMP 0x0048c498
switchD_0048a923::caseD_25:
0048C203  33 C0                     XOR EAX,EAX
0048C205  BA 23 00 00 00            MOV EDX,0x23
0048C20A  66 89 81 31 02 00 00      MOV word ptr [ECX + 0x231],AX
0048C211  66 89 81 33 02 00 00      MOV word ptr [ECX + 0x233],AX
LAB_0048c218:
0048C218  66 89 91 37 02 00 00      MOV word ptr [ECX + 0x237],DX
0048C21F  C6 81 81 02 00 00 01      MOV byte ptr [ECX + 0x281],0x1
0048C226  66 89 81 39 02 00 00      MOV word ptr [ECX + 0x239],AX
0048C22D  66 89 81 3B 02 00 00      MOV word ptr [ECX + 0x23b],AX
0048C234  66 89 91 3F 02 00 00      MOV word ptr [ECX + 0x23f],DX
0048C23B  88 81 B2 02 00 00         MOV byte ptr [ECX + 0x2b2],AL
0048C241  E9 52 02 00 00            JMP 0x0048c498
switchD_0048a923::caseD_26:
0048C246  33 C0                     XOR EAX,EAX
0048C248  BB C9 FF FF FF            MOV EBX,0xffffffc9
0048C24D  66 89 81 31 02 00 00      MOV word ptr [ECX + 0x231],AX
0048C254  66 89 81 33 02 00 00      MOV word ptr [ECX + 0x233],AX
0048C25B  66 C7 81 37 02 00 00 6E 00  MOV word ptr [ECX + 0x237],0x6e
0048C264  C6 81 81 02 00 00 06      MOV byte ptr [ECX + 0x281],0x6
0048C26B  BE DD FF FF FF            MOV ESI,0xffffffdd
0048C270  66 89 99 39 02 00 00      MOV word ptr [ECX + 0x239],BX
0048C277  BA 28 00 00 00            MOV EDX,0x28
0048C27C  66 89 B1 3B 02 00 00      MOV word ptr [ECX + 0x23b],SI
0048C283  66 89 91 3F 02 00 00      MOV word ptr [ECX + 0x23f],DX
0048C28A  BF 23 00 00 00            MOV EDI,0x23
0048C28F  66 89 99 41 02 00 00      MOV word ptr [ECX + 0x241],BX
0048C296  66 89 B9 43 02 00 00      MOV word ptr [ECX + 0x243],DI
0048C29D  66 89 91 47 02 00 00      MOV word ptr [ECX + 0x247],DX
0048C2A4  66 89 81 49 02 00 00      MOV word ptr [ECX + 0x249],AX
0048C2AB  66 89 B1 4B 02 00 00      MOV word ptr [ECX + 0x24b],SI
0048C2B2  66 89 91 4F 02 00 00      MOV word ptr [ECX + 0x24f],DX
0048C2B9  66 89 91 57 02 00 00      MOV word ptr [ECX + 0x257],DX
0048C2C0  66 89 B1 5B 02 00 00      MOV word ptr [ECX + 0x25b],SI
0048C2C7  66 89 91 5F 02 00 00      MOV word ptr [ECX + 0x25f],DX
0048C2CE  66 89 91 67 02 00 00      MOV word ptr [ECX + 0x267],DX
0048C2D5  BB 3C 00 00 00            MOV EBX,0x3c
0048C2DA  BE DF FF FF FF            MOV ESI,0xffffffdf
0048C2DF  BA 7E FF FF FF            MOV EDX,0xffffff7e
0048C2E4  66 89 81 51 02 00 00      MOV word ptr [ECX + 0x251],AX
0048C2EB  66 89 B9 53 02 00 00      MOV word ptr [ECX + 0x253],DI
0048C2F2  66 89 99 59 02 00 00      MOV word ptr [ECX + 0x259],BX
0048C2F9  66 89 99 61 02 00 00      MOV word ptr [ECX + 0x261],BX
0048C300  66 89 B9 63 02 00 00      MOV word ptr [ECX + 0x263],DI
0048C307  C6 81 B2 02 00 00 02      MOV byte ptr [ECX + 0x2b2],0x2
0048C30E  66 89 81 A6 02 00 00      MOV word ptr [ECX + 0x2a6],AX
0048C315  66 C7 81 A8 02 00 00 14 00  MOV word ptr [ECX + 0x2a8],0x14
0048C31E  66 89 B1 AA 02 00 00      MOV word ptr [ECX + 0x2aa],SI
0048C325  66 89 81 AC 02 00 00      MOV word ptr [ECX + 0x2ac],AX
0048C32C  66 C7 81 AE 02 00 00 EC FF  MOV word ptr [ECX + 0x2ae],0xffec
0048C335  66 89 B1 B0 02 00 00      MOV word ptr [ECX + 0x2b0],SI
0048C33C  C6 81 BF 02 00 00 02      MOV byte ptr [ECX + 0x2bf],0x2
0048C343  66 89 91 B3 02 00 00      MOV word ptr [ECX + 0x2b3],DX
0048C34A  66 C7 81 B5 02 00 00 2D 00  MOV word ptr [ECX + 0x2b5],0x2d
0048C353  E9 C5 00 00 00            JMP 0x0048c41d
switchD_0048a923::caseD_12:
0048C358  33 C0                     XOR EAX,EAX
0048C35A  BB 3C 00 00 00            MOV EBX,0x3c
0048C35F  66 89 81 31 02 00 00      MOV word ptr [ECX + 0x231],AX
0048C366  66 89 81 33 02 00 00      MOV word ptr [ECX + 0x233],AX
0048C36D  66 C7 81 37 02 00 00 7D 00  MOV word ptr [ECX + 0x237],0x7d
0048C376  C6 81 81 02 00 00 03      MOV byte ptr [ECX + 0x281],0x3
0048C37D  66 C7 81 39 02 00 00 C4 FF  MOV word ptr [ECX + 0x239],0xffc4
0048C386  66 89 81 3B 02 00 00      MOV word ptr [ECX + 0x23b],AX
0048C38D  66 89 99 3F 02 00 00      MOV word ptr [ECX + 0x23f],BX
0048C394  66 89 81 41 02 00 00      MOV word ptr [ECX + 0x241],AX
0048C39B  66 89 81 43 02 00 00      MOV word ptr [ECX + 0x243],AX
0048C3A2  66 C7 81 47 02 00 00 23 00  MOV word ptr [ECX + 0x247],0x23
0048C3AB  66 89 99 49 02 00 00      MOV word ptr [ECX + 0x249],BX
0048C3B2  BE DF FF FF FF            MOV ESI,0xffffffdf
0048C3B7  66 89 81 4B 02 00 00      MOV word ptr [ECX + 0x24b],AX
0048C3BE  66 C7 81 4F 02 00 00 37 00  MOV word ptr [ECX + 0x24f],0x37
0048C3C7  C6 81 B2 02 00 00 02      MOV byte ptr [ECX + 0x2b2],0x2
0048C3CE  66 89 81 A6 02 00 00      MOV word ptr [ECX + 0x2a6],AX
0048C3D5  66 C7 81 A8 02 00 00 14 00  MOV word ptr [ECX + 0x2a8],0x14
0048C3DE  66 89 B1 AA 02 00 00      MOV word ptr [ECX + 0x2aa],SI
0048C3E5  66 89 81 AC 02 00 00      MOV word ptr [ECX + 0x2ac],AX
0048C3EC  66 C7 81 AE 02 00 00 EC FF  MOV word ptr [ECX + 0x2ae],0xffec
0048C3F5  66 89 B1 B0 02 00 00      MOV word ptr [ECX + 0x2b0],SI
LAB_0048c3fc:
0048C3FC  BA 90 FF FF FF            MOV EDX,0xffffff90
0048C401  C6 81 BF 02 00 00 02      MOV byte ptr [ECX + 0x2bf],0x2
0048C408  66 89 91 B3 02 00 00      MOV word ptr [ECX + 0x2b3],DX
0048C40F  66 C7 81 B5 02 00 00 2D 00  MOV word ptr [ECX + 0x2b5],0x2d
LAB_0048c418:
0048C418  B8 1D 00 00 00            MOV EAX,0x1d
LAB_0048c41d:
0048C41D  5F                        POP EDI
0048C41E  5E                        POP ESI
0048C41F  66 89 81 B7 02 00 00      MOV word ptr [ECX + 0x2b7],AX
0048C426  66 89 91 B9 02 00 00      MOV word ptr [ECX + 0x2b9],DX
0048C42D  66 C7 81 BB 02 00 00 D3 FF  MOV word ptr [ECX + 0x2bb],0xffd3
0048C436  66 89 81 BD 02 00 00      MOV word ptr [ECX + 0x2bd],AX
0048C43D  5B                        POP EBX
0048C43E  C3                        RET
switchD_0048a923::caseD_22:
0048C43F  33 C0                     XOR EAX,EAX
0048C441  66 89 81 31 02 00 00      MOV word ptr [ECX + 0x231],AX
0048C448  66 89 81 33 02 00 00      MOV word ptr [ECX + 0x233],AX
0048C44F  66 C7 81 37 02 00 00 64 00  MOV word ptr [ECX + 0x237],0x64
0048C458  C6 81 81 02 00 00 02      MOV byte ptr [ECX + 0x281],0x2
0048C45F  66 C7 81 39 02 00 00 D3 FF  MOV word ptr [ECX + 0x239],0xffd3
0048C468  66 89 81 3B 02 00 00      MOV word ptr [ECX + 0x23b],AX
0048C46F  66 C7 81 3F 02 00 00 37 00  MOV word ptr [ECX + 0x23f],0x37
0048C478  66 C7 81 41 02 00 00 0F 00  MOV word ptr [ECX + 0x241],0xf
0048C481  66 89 81 43 02 00 00      MOV word ptr [ECX + 0x243],AX
0048C488  66 C7 81 47 02 00 00 1E 00  MOV word ptr [ECX + 0x247],0x1e
LAB_0048c491:
0048C491  C6 81 B2 02 00 00 01      MOV byte ptr [ECX + 0x2b2],0x1
LAB_0048c498:
0048C498  66 89 81 A6 02 00 00      MOV word ptr [ECX + 0x2a6],AX
0048C49F  66 89 81 A8 02 00 00      MOV word ptr [ECX + 0x2a8],AX
0048C4A6  66 C7 81 AA 02 00 00 DF FF  MOV word ptr [ECX + 0x2aa],0xffdf
0048C4AF  88 81 BF 02 00 00         MOV byte ptr [ECX + 0x2bf],AL
switchD_0048a923::default:
0048C4B5  5F                        POP EDI
0048C4B6  5E                        POP ESI
0048C4B7  5B                        POP EBX
0048C4B8  C3                        RET
