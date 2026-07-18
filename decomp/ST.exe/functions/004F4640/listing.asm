FUN_004f4640:
004F4640  55                        PUSH EBP
004F4641  8B EC                     MOV EBP,ESP
004F4643  81 EC A4 00 00 00         SUB ESP,0xa4
004F4649  53                        PUSH EBX
004F464A  56                        PUSH ESI
004F464B  57                        PUSH EDI
004F464C  B9 0F 00 00 00            MOV ECX,0xf
004F4651  33 C0                     XOR EAX,EAX
004F4653  8D BD 5C FF FF FF         LEA EDI,[EBP + 0xffffff5c]
004F4659  F3 AB                     STOSD.REP ES:EDI
004F465B  8A 45 10                  MOV AL,byte ptr [EBP + 0x10]
004F465E  BF B4 1B 7C 00            MOV EDI,0x7c1bb4
004F4663  88 85 73 FF FF FF         MOV byte ptr [EBP + 0xffffff73],AL
004F4669  83 C9 FF                  OR ECX,0xffffffff
004F466C  33 C0                     XOR EAX,EAX
004F466E  33 D2                     XOR EDX,EDX
004F4670  F2 AE                     SCASB.REPNE ES:EDI
004F4672  F7 D1                     NOT ECX
004F4674  2B F9                     SUB EDI,ECX
004F4676  8D 9D 78 FF FF FF         LEA EBX,[EBP + 0xffffff78]
004F467C  8B C1                     MOV EAX,ECX
004F467E  8B F7                     MOV ESI,EDI
004F4680  8B FB                     MOV EDI,EBX
004F4682  C7 85 5C FF FF FF F8 FF FF FF  MOV dword ptr [EBP + 0xffffff5c],0xfffffff8
004F468C  C1 E9 02                  SHR ECX,0x2
004F468F  89 95 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],EDX
004F4695  89 95 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EDX
004F469B  89 95 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EDX
004F46A1  C7 85 6C FF FF FF 90 01 00 00  MOV dword ptr [EBP + 0xffffff6c],0x190
004F46AB  88 95 70 FF FF FF         MOV byte ptr [EBP + 0xffffff70],DL
004F46B1  88 95 71 FF FF FF         MOV byte ptr [EBP + 0xffffff71],DL
004F46B7  88 95 72 FF FF FF         MOV byte ptr [EBP + 0xffffff72],DL
004F46BD  C6 85 74 FF FF FF 01      MOV byte ptr [EBP + 0xffffff74],0x1
004F46C4  C6 85 75 FF FF FF 02      MOV byte ptr [EBP + 0xffffff75],0x2
004F46CB  C6 85 76 FF FF FF 01      MOV byte ptr [EBP + 0xffffff76],0x1
004F46D2  C6 85 77 FF FF FF 22      MOV byte ptr [EBP + 0xffffff77],0x22
004F46D9  B3 5C                     MOV BL,0x5c
004F46DB  F3 A5                     MOVSD.REP ES:EDI,ESI
004F46DD  8B C8                     MOV ECX,EAX
004F46DF  B0 43                     MOV AL,0x43
004F46E1  83 E1 03                  AND ECX,0x3
004F46E4  88 55 D4                  MOV byte ptr [EBP + -0x2c],DL
004F46E7  F3 A4                     MOVSB.REP ES:EDI,ESI
004F46E9  B1 10                     MOV CL,0x10
004F46EB  C6 45 D5 6A               MOV byte ptr [EBP + -0x2b],0x6a
004F46EF  88 4D E4                  MOV byte ptr [EBP + -0x1c],CL
004F46F2  88 4D E5                  MOV byte ptr [EBP + -0x1b],CL
004F46F5  B1 11                     MOV CL,0x11
004F46F7  C6 45 D6 46               MOV byte ptr [EBP + -0x2a],0x46
004F46FB  88 4D E6                  MOV byte ptr [EBP + -0x1a],CL
004F46FE  88 4D E7                  MOV byte ptr [EBP + -0x19],CL
004F4701  88 4D E8                  MOV byte ptr [EBP + -0x18],CL
004F4704  88 4D E9                  MOV byte ptr [EBP + -0x17],CL
004F4707  B1 16                     MOV CL,0x16
004F4709  C6 45 D7 28               MOV byte ptr [EBP + -0x29],0x28
004F470D  88 4D EB                  MOV byte ptr [EBP + -0x15],CL
004F4710  88 4D EC                  MOV byte ptr [EBP + -0x14],CL
004F4713  B1 17                     MOV CL,0x17
004F4715  C6 45 D8 29               MOV byte ptr [EBP + -0x28],0x29
004F4719  88 4D ED                  MOV byte ptr [EBP + -0x13],CL
004F471C  88 4D EE                  MOV byte ptr [EBP + -0x12],CL
004F471F  88 4D EF                  MOV byte ptr [EBP + -0x11],CL
004F4722  88 4D F0                  MOV byte ptr [EBP + -0x10],CL
004F4725  B1 AF                     MOV CL,0xaf
004F4727  88 45 D9                  MOV byte ptr [EBP + -0x27],AL
004F472A  88 4D F5                  MOV byte ptr [EBP + -0xb],CL
004F472D  88 4D F6                  MOV byte ptr [EBP + -0xa],CL
004F4730  88 4D F7                  MOV byte ptr [EBP + -0x9],CL
004F4733  88 45 DA                  MOV byte ptr [EBP + -0x26],AL
004F4736  88 45 DB                  MOV byte ptr [EBP + -0x25],AL
004F4739  C6 45 DC CF               MOV byte ptr [EBP + -0x24],0xcf
004F473D  C6 45 DD 57               MOV byte ptr [EBP + -0x23],0x57
004F4741  C6 45 DE A2               MOV byte ptr [EBP + -0x22],0xa2
004F4745  C6 45 DF 5B               MOV byte ptr [EBP + -0x21],0x5b
004F4749  88 5D E0                  MOV byte ptr [EBP + -0x20],BL
004F474C  88 5D E1                  MOV byte ptr [EBP + -0x1f],BL
004F474F  88 5D E2                  MOV byte ptr [EBP + -0x1e],BL
004F4752  C6 45 E3 15               MOV byte ptr [EBP + -0x1d],0x15
004F4756  C6 45 EA 1B               MOV byte ptr [EBP + -0x16],0x1b
004F475A  C6 45 F1 B1               MOV byte ptr [EBP + -0xf],0xb1
004F475E  C6 45 F2 84               MOV byte ptr [EBP + -0xe],0x84
004F4762  C6 45 F3 AE               MOV byte ptr [EBP + -0xd],0xae
004F4766  C6 45 F4 C1               MOV byte ptr [EBP + -0xc],0xc1
004F476A  B1 3F                     MOV CL,0x3f
004F476C  88 4D F8                  MOV byte ptr [EBP + -0x8],CL
004F476F  88 4D B2                  MOV byte ptr [EBP + -0x4e],CL
004F4772  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004F4775  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
004F4778  51                        PUSH ECX
004F4779  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004F477C  68 2C 02 20 00            PUSH 0x20022c
004F4781  52                        PUSH EDX
004F4782  88 45 FD                  MOV byte ptr [EBP + -0x3],AL
004F4785  88 45 FE                  MOV byte ptr [EBP + -0x2],AL
004F4788  88 45 B5                  MOV byte ptr [EBP + -0x4b],AL
004F478B  6A 01                     PUSH 0x1
004F478D  6A 07                     PUSH 0x7
004F478F  8D 45 D4                  LEA EAX,[EBP + -0x2c]
004F4792  6A 06                     PUSH 0x6
004F4794  50                        PUSH EAX
004F4795  8D 45 98                  LEA EAX,[EBP + -0x68]
004F4798  51                        PUSH ECX
004F4799  50                        PUSH EAX
004F479A  C6 45 F9 46               MOV byte ptr [EBP + -0x7],0x46
004F479E  C6 45 FA 28               MOV byte ptr [EBP + -0x6],0x28
004F47A2  C6 45 FB 29               MOV byte ptr [EBP + -0x5],0x29
004F47A6  C6 45 98 20               MOV byte ptr [EBP + -0x68],0x20
004F47AA  C6 45 99 21               MOV byte ptr [EBP + -0x67],0x21
004F47AE  C6 45 9A 22               MOV byte ptr [EBP + -0x66],0x22
004F47B2  C6 45 9B 23               MOV byte ptr [EBP + -0x65],0x23
004F47B6  C6 45 9C 25               MOV byte ptr [EBP + -0x64],0x25
004F47BA  C6 45 9D 26               MOV byte ptr [EBP + -0x63],0x26
004F47BE  C6 45 9E 27               MOV byte ptr [EBP + -0x62],0x27
004F47C2  C6 45 9F 28               MOV byte ptr [EBP + -0x61],0x28
004F47C6  C6 45 A0 29               MOV byte ptr [EBP + -0x60],0x29
004F47CA  C6 45 A1 2C               MOV byte ptr [EBP + -0x5f],0x2c
004F47CE  C6 45 A2 2D               MOV byte ptr [EBP + -0x5e],0x2d
004F47D2  C6 45 A3 2E               MOV byte ptr [EBP + -0x5d],0x2e
004F47D6  C6 45 A4 2F               MOV byte ptr [EBP + -0x5c],0x2f
004F47DA  C6 45 A5 30               MOV byte ptr [EBP + -0x5b],0x30
004F47DE  C6 45 A6 31               MOV byte ptr [EBP + -0x5a],0x31
004F47E2  C6 45 A7 32               MOV byte ptr [EBP + -0x59],0x32
004F47E6  C6 45 A8 33               MOV byte ptr [EBP + -0x58],0x33
004F47EA  C6 45 A9 34               MOV byte ptr [EBP + -0x57],0x34
004F47EE  C6 45 AA 35               MOV byte ptr [EBP + -0x56],0x35
004F47F2  C6 45 AB 36               MOV byte ptr [EBP + -0x55],0x36
004F47F6  C6 45 AC 37               MOV byte ptr [EBP + -0x54],0x37
004F47FA  C6 45 AD 38               MOV byte ptr [EBP + -0x53],0x38
004F47FE  C6 45 AE 39               MOV byte ptr [EBP + -0x52],0x39
004F4802  C6 45 AF 3A               MOV byte ptr [EBP + -0x51],0x3a
004F4806  C6 45 B0 3D               MOV byte ptr [EBP + -0x50],0x3d
004F480A  C6 45 B1 3E               MOV byte ptr [EBP + -0x4f],0x3e
004F480E  C6 45 B3 41               MOV byte ptr [EBP + -0x4d],0x41
004F4812  C6 45 B4 42               MOV byte ptr [EBP + -0x4c],0x42
004F4816  C6 45 B6 44               MOV byte ptr [EBP + -0x4a],0x44
004F481A  C6 45 B7 45               MOV byte ptr [EBP + -0x49],0x45
004F481E  C6 45 B8 0D               MOV byte ptr [EBP + -0x48],0xd
004F4822  C6 45 B9 0A               MOV byte ptr [EBP + -0x47],0xa
004F4826  C6 45 BA 46               MOV byte ptr [EBP + -0x46],0x46
004F482A  C6 45 BB 47               MOV byte ptr [EBP + -0x45],0x47
004F482E  C6 45 BC 48               MOV byte ptr [EBP + -0x44],0x48
004F4832  C6 45 BD 49               MOV byte ptr [EBP + -0x43],0x49
004F4836  C6 45 BE 4A               MOV byte ptr [EBP + -0x42],0x4a
004F483A  C6 45 BF 4B               MOV byte ptr [EBP + -0x41],0x4b
004F483E  C6 45 C0 4C               MOV byte ptr [EBP + -0x40],0x4c
004F4842  C6 45 C1 4D               MOV byte ptr [EBP + -0x3f],0x4d
004F4846  C6 45 C2 4E               MOV byte ptr [EBP + -0x3e],0x4e
004F484A  C6 45 C3 4F               MOV byte ptr [EBP + -0x3d],0x4f
004F484E  C6 45 C4 50               MOV byte ptr [EBP + -0x3c],0x50
004F4852  C6 45 C5 51               MOV byte ptr [EBP + -0x3b],0x51
004F4856  C6 45 C6 52               MOV byte ptr [EBP + -0x3a],0x52
004F485A  C6 45 C7 53               MOV byte ptr [EBP + -0x39],0x53
004F485E  C6 45 C8 54               MOV byte ptr [EBP + -0x38],0x54
004F4862  C6 45 C9 55               MOV byte ptr [EBP + -0x37],0x55
004F4866  C6 45 CA 56               MOV byte ptr [EBP + -0x36],0x56
004F486A  C6 45 CB 57               MOV byte ptr [EBP + -0x35],0x57
004F486E  C6 45 CC 58               MOV byte ptr [EBP + -0x34],0x58
004F4872  C6 45 CD 59               MOV byte ptr [EBP + -0x33],0x59
004F4876  C6 45 CE 5A               MOV byte ptr [EBP + -0x32],0x5a
004F487A  88 5D CF                  MOV byte ptr [EBP + -0x31],BL
004F487D  C6 45 D0 7C               MOV byte ptr [EBP + -0x30],0x7c
004F4881  C6 45 D1 7E               MOV byte ptr [EBP + -0x2f],0x7e
004F4885  C6 45 D2 2A               MOV byte ptr [EBP + -0x2e],0x2a
004F4889  52                        PUSH EDX
004F488A  8D 8D 5C FF FF FF         LEA ECX,[EBP + 0xffffff5c]
004F4890  51                        PUSH ECX
004F4891  68 9D 01 00 00            PUSH 0x19d
004F4896  E8 55 89 21 00            CALL 0x0070d1f0
004F489B  83 C4 30                  ADD ESP,0x30
004F489E  5F                        POP EDI
004F489F  5E                        POP ESI
004F48A0  5B                        POP EBX
004F48A1  8B E5                     MOV ESP,EBP
004F48A3  5D                        POP EBP
004F48A4  C3                        RET
