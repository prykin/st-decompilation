StartSystemTy::LoadGraph:
005DB4F0  55                        PUSH EBP
005DB4F1  8B EC                     MOV EBP,ESP
005DB4F3  83 EC 4C                  SUB ESP,0x4c
005DB4F6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005DB4FB  53                        PUSH EBX
005DB4FC  56                        PUSH ESI
005DB4FD  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005DB500  33 DB                     XOR EBX,EBX
005DB502  57                        PUSH EDI
005DB503  8D 55 B8                  LEA EDX,[EBP + -0x48]
005DB506  8D 4D B4                  LEA ECX,[EBP + -0x4c]
005DB509  53                        PUSH EBX
005DB50A  52                        PUSH EDX
005DB50B  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
005DB50E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005DB514  E8 D7 22 15 00            CALL 0x0072d7f0
005DB519  8B F0                     MOV ESI,EAX
005DB51B  83 C4 08                  ADD ESP,0x8
005DB51E  3B F3                     CMP ESI,EBX
005DB520  0F 85 D5 06 00 00         JNZ 0x005dbbfb
005DB526  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
005DB529  8B CE                     MOV ECX,ESI
005DB52B  E8 56 7A E2 FF            CALL 0x00402f86
005DB530  33 FF                     XOR EDI,EDI
LAB_005db532:
005DB532  57                        PUSH EDI
005DB533  8D 46 3C                  LEA EAX,[ESI + 0x3c]
005DB536  68 A0 D7 7C 00            PUSH 0x7cd7a0
005DB53B  50                        PUSH EAX
005DB53C  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005DB542  6A 01                     PUSH 0x1
005DB544  53                        PUSH EBX
005DB545  53                        PUSH EBX
005DB546  8D 46 3C                  LEA EAX,[ESI + 0x3c]
005DB549  53                        PUSH EBX
005DB54A  50                        PUSH EAX
005DB54B  A1 80 67 80 00            MOV EAX,[0x00806780]
005DB550  50                        PUSH EAX
005DB551  E8 0A F9 12 00            CALL 0x0070ae60
005DB556  83 C4 24                  ADD ESP,0x24
005DB559  83 FF 05                  CMP EDI,0x5
005DB55C  89 84 BE 44 02 00 00      MOV dword ptr [ESI + EDI*0x4 + 0x244],EAX
005DB563  0F 87 6D 01 00 00         JA 0x005db6d6
switchD_005db569::switchD:
005DB569  FF 24 BD 4C BC 5D 00      JMP dword ptr [EDI*0x4 + 0x5dbc4c]
switchD_005db569::caseD_0:
005DB570  C7 86 5C 02 00 00 F5 00 00 00  MOV dword ptr [ESI + 0x25c],0xf5
005DB57A  C7 86 60 02 00 00 3D 00 00 00  MOV dword ptr [ESI + 0x260],0x3d
005DB584  C7 86 64 02 00 00 FA 00 00 00  MOV dword ptr [ESI + 0x264],0xfa
005DB58E  89 9E 68 02 00 00         MOV dword ptr [ESI + 0x268],EBX
005DB594  66 89 9E 71 02 00 00      MOV word ptr [ESI + 0x271],BX
005DB59B  E9 36 01 00 00            JMP 0x005db6d6
switchD_005db569::caseD_1:
005DB5A0  C7 86 73 02 00 00 F6 01 00 00  MOV dword ptr [ESI + 0x273],0x1f6
005DB5AA  C7 86 77 02 00 00 3D 00 00 00  MOV dword ptr [ESI + 0x277],0x3d
005DB5B4  C7 86 7B 02 00 00 4B 00 00 00  MOV dword ptr [ESI + 0x27b],0x4b
005DB5BE  89 9E 7F 02 00 00         MOV dword ptr [ESI + 0x27f],EBX
005DB5C4  66 89 9E 88 02 00 00      MOV word ptr [ESI + 0x288],BX
005DB5CB  E9 06 01 00 00            JMP 0x005db6d6
switchD_005db569::caseD_2:
005DB5D0  C7 86 8A 02 00 00 17 01 00 00  MOV dword ptr [ESI + 0x28a],0x117
005DB5DA  C7 86 8E 02 00 00 AB 01 00 00  MOV dword ptr [ESI + 0x28e],0x1ab
005DB5E4  C7 86 92 02 00 00 32 00 00 00  MOV dword ptr [ESI + 0x292],0x32
005DB5EE  89 9E 96 02 00 00         MOV dword ptr [ESI + 0x296],EBX
005DB5F4  66 89 9E 9F 02 00 00      MOV word ptr [ESI + 0x29f],BX
005DB5FB  E9 D6 00 00 00            JMP 0x005db6d6
switchD_005db569::caseD_3:
005DB600  C7 86 A1 02 00 00 EA 01 00 00  MOV dword ptr [ESI + 0x2a1],0x1ea
005DB60A  C7 86 A5 02 00 00 B3 01 00 00  MOV dword ptr [ESI + 0x2a5],0x1b3
005DB614  C7 86 A9 02 00 00 4B 00 00 00  MOV dword ptr [ESI + 0x2a9],0x4b
005DB61E  89 9E AD 02 00 00         MOV dword ptr [ESI + 0x2ad],EBX
005DB624  66 89 9E B6 02 00 00      MOV word ptr [ESI + 0x2b6],BX
005DB62B  E9 A6 00 00 00            JMP 0x005db6d6
switchD_005db569::caseD_4:
005DB630  C7 86 B8 02 00 00 03 01 00 00  MOV dword ptr [ESI + 0x2b8],0x103
005DB63A  C7 86 BC 02 00 00 F9 01 00 00  MOV dword ptr [ESI + 0x2bc],0x1f9
005DB644  E8 77 30 15 00            CALL 0x0072e6c0
005DB649  83 E0 01                  AND EAX,0x1
005DB64C  40                        INC EAX
005DB64D  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005DB650  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
005DB653  89 8E C0 02 00 00         MOV dword ptr [ESI + 0x2c0],ECX
005DB659  E8 62 30 15 00            CALL 0x0072e6c0
005DB65E  33 D2                     XOR EDX,EDX
005DB660  B9 03 00 00 00            MOV ECX,0x3
005DB665  F7 F1                     DIV ECX
005DB667  42                        INC EDX
005DB668  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
005DB66B  8D 04 92                  LEA EAX,[EDX + EDX*0x4]
005DB66E  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
005DB671  C1 E2 03                  SHL EDX,0x3
005DB674  89 96 C4 02 00 00         MOV dword ptr [ESI + 0x2c4],EDX
005DB67A  66 89 9E CD 02 00 00      MOV word ptr [ESI + 0x2cd],BX
005DB681  EB 53                     JMP 0x005db6d6
switchD_005db569::caseD_5:
005DB683  C7 86 CF 02 00 00 05 02 00 00  MOV dword ptr [ESI + 0x2cf],0x205
005DB68D  C7 86 D3 02 00 00 FA 01 00 00  MOV dword ptr [ESI + 0x2d3],0x1fa
005DB697  E8 24 30 15 00            CALL 0x0072e6c0
005DB69C  33 D2                     XOR EDX,EDX
005DB69E  B9 03 00 00 00            MOV ECX,0x3
005DB6A3  F7 F1                     DIV ECX
005DB6A5  83 C2 02                  ADD EDX,0x2
005DB6A8  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
005DB6AB  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
005DB6AE  89 96 D7 02 00 00         MOV dword ptr [ESI + 0x2d7],EDX
005DB6B4  E8 07 30 15 00            CALL 0x0072e6c0
005DB6B9  83 E0 01                  AND EAX,0x1
005DB6BC  40                        INC EAX
005DB6BD  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005DB6C0  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005DB6C3  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005DB6C6  C1 E0 03                  SHL EAX,0x3
005DB6C9  89 86 DB 02 00 00         MOV dword ptr [ESI + 0x2db],EAX
005DB6CF  66 89 9E E4 02 00 00      MOV word ptr [ESI + 0x2e4],BX
switchD_005db569::default:
005DB6D6  47                        INC EDI
005DB6D7  83 FF 06                  CMP EDI,0x6
005DB6DA  0F 8C 52 FE FF FF         JL 0x005db532
005DB6E0  8B 0D 80 67 80 00         MOV ECX,dword ptr [0x00806780]
005DB6E6  53                        PUSH EBX
005DB6E7  51                        PUSH ECX
005DB6E8  E8 5E 63 E2 FF            CALL 0x00401a4b
005DB6ED  8B 15 80 67 80 00         MOV EDX,dword ptr [0x00806780]
005DB6F3  6A 01                     PUSH 0x1
005DB6F5  6A 02                     PUSH 0x2
005DB6F7  68 90 C7 7C 00            PUSH 0x7cc790
005DB6FC  6A 01                     PUSH 0x1
005DB6FE  52                        PUSH EDX
005DB6FF  E8 9C EE 12 00            CALL 0x0070a5a0
005DB704  89 86 F0 02 00 00         MOV dword ptr [ESI + 0x2f0],EAX
005DB70A  8A 0D D9 7D 80 00         MOV CL,byte ptr [0x00807dd9]
005DB710  51                        PUSH ECX
005DB711  53                        PUSH EBX
005DB712  50                        PUSH EAX
005DB713  E8 D7 7D E2 FF            CALL 0x004034ef
005DB718  89 46 30                  MOV dword ptr [ESI + 0x30],EAX
005DB71B  C7 40 58 01 00 00 00      MOV dword ptr [EAX + 0x58],0x1
005DB722  89 58 5C                  MOV dword ptr [EAX + 0x5c],EBX
005DB725  8A 15 D9 7D 80 00         MOV DL,byte ptr [0x00807dd9]
005DB72B  8B 86 F0 02 00 00         MOV EAX,dword ptr [ESI + 0x2f0]
005DB731  52                        PUSH EDX
005DB732  53                        PUSH EBX
005DB733  50                        PUSH EAX
005DB734  E8 25 87 E2 FF            CALL 0x00403e5e
005DB739  89 46 34                  MOV dword ptr [ESI + 0x34],EAX
005DB73C  8B 86 F0 02 00 00         MOV EAX,dword ptr [ESI + 0x2f0]
005DB742  83 C4 34                  ADD ESP,0x34
005DB745  8D BE EC 02 00 00         LEA EDI,[ESI + 0x2ec]
005DB74B  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005DB74E  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005DB751  50                        PUSH EAX
005DB752  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005DB757  51                        PUSH ECX
005DB758  52                        PUSH EDX
005DB759  68 F6 23 40 00            PUSH 0x4023f6
005DB75E  6A 32                     PUSH 0x32
005DB760  57                        PUSH EDI
005DB761  50                        PUSH EAX
005DB762  E8 C9 6B 0D 00            CALL 0x006b2330
005DB767  8B 0F                     MOV ECX,dword ptr [EDI]
005DB769  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005DB76F  53                        PUSH EBX
005DB770  6A 01                     PUSH 0x1
005DB772  6A FF                     PUSH -0x1
005DB774  51                        PUSH ECX
005DB775  52                        PUSH EDX
005DB776  E8 C5 7E 0D 00            CALL 0x006b3640
005DB77B  8B 07                     MOV EAX,dword ptr [EDI]
005DB77D  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005DB783  50                        PUSH EAX
005DB784  51                        PUSH ECX
005DB785  E8 66 83 0D 00            CALL 0x006b3af0
005DB78A  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005DB790  53                        PUSH EBX
005DB791  53                        PUSH EBX
005DB792  53                        PUSH EBX
005DB793  8D BE F8 02 00 00         LEA EDI,[ESI + 0x2f8]
005DB799  6A 07                     PUSH 0x7
005DB79B  6A 32                     PUSH 0x32
005DB79D  52                        PUSH EDX
005DB79E  8B CF                     MOV ECX,EDI
005DB7A0  E8 FB A0 13 00            CALL 0x007158a0
005DB7A5  8B 0D 84 67 80 00         MOV ECX,dword ptr [0x00806784]
005DB7AB  8B 07                     MOV EAX,dword ptr [EDI]
005DB7AD  6A FF                     PUSH -0x1
005DB7AF  68 98 D7 7C 00            PUSH 0x7cd798
005DB7B4  53                        PUSH EBX
005DB7B5  6A 07                     PUSH 0x7
005DB7B7  51                        PUSH ECX
005DB7B8  8B CF                     MOV ECX,EDI
005DB7BA  FF 50 04                  CALL dword ptr [EAX + 0x4]
005DB7BD  53                        PUSH EBX
005DB7BE  53                        PUSH EBX
005DB7BF  53                        PUSH EBX
005DB7C0  C7 86 14 03 00 00 01 00 00 00  MOV dword ptr [ESI + 0x314],0x1
005DB7CA  89 9E 18 03 00 00         MOV dword ptr [ESI + 0x318],EBX
005DB7D0  89 9E 00 03 00 00         MOV dword ptr [ESI + 0x300],EBX
005DB7D6  8D BE 8D 03 00 00         LEA EDI,[ESI + 0x38d]
005DB7DC  6A 07                     PUSH 0x7
005DB7DE  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005DB7E4  6A 31                     PUSH 0x31
005DB7E6  52                        PUSH EDX
005DB7E7  8B CF                     MOV ECX,EDI
005DB7E9  E8 B2 A0 13 00            CALL 0x007158a0
005DB7EE  8B 0D 84 67 80 00         MOV ECX,dword ptr [0x00806784]
005DB7F4  8B 07                     MOV EAX,dword ptr [EDI]
005DB7F6  6A FF                     PUSH -0x1
005DB7F8  68 4C C0 7C 00            PUSH 0x7cc04c
005DB7FD  53                        PUSH EBX
005DB7FE  6A 07                     PUSH 0x7
005DB800  51                        PUSH ECX
005DB801  8B CF                     MOV ECX,EDI
005DB803  FF 50 04                  CALL dword ptr [EAX + 0x4]
005DB806  C7 86 A9 03 00 00 E5 00 00 00  MOV dword ptr [ESI + 0x3a9],0xe5
005DB810  C7 86 AD 03 00 00 B8 00 00 00  MOV dword ptr [ESI + 0x3ad],0xb8
005DB81A  89 9E 95 03 00 00         MOV dword ptr [ESI + 0x395],EBX
005DB820  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
005DB823  83 F8 FF                  CMP EAX,-0x1
005DB826  74 0A                     JZ 0x005db832
005DB828  8B 57 48                  MOV EDX,dword ptr [EDI + 0x48]
005DB82B  50                        PUSH EAX
005DB82C  52                        PUSH EDX
005DB82D  E8 BE 82 0D 00            CALL 0x006b3af0
LAB_005db832:
005DB832  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005DB837  53                        PUSH EBX
005DB838  53                        PUSH EBX
005DB839  53                        PUSH EBX
005DB83A  8D BE 1E 04 00 00         LEA EDI,[ESI + 0x41e]
005DB840  6A 07                     PUSH 0x7
005DB842  6A 31                     PUSH 0x31
005DB844  50                        PUSH EAX
005DB845  8B CF                     MOV ECX,EDI
005DB847  E8 54 A0 13 00            CALL 0x007158a0
005DB84C  A1 84 67 80 00            MOV EAX,[0x00806784]
005DB851  8B 17                     MOV EDX,dword ptr [EDI]
005DB853  6A FF                     PUSH -0x1
005DB855  68 40 C0 7C 00            PUSH 0x7cc040
005DB85A  53                        PUSH EBX
005DB85B  6A 07                     PUSH 0x7
005DB85D  50                        PUSH EAX
005DB85E  8B CF                     MOV ECX,EDI
005DB860  FF 52 04                  CALL dword ptr [EDX + 0x4]
005DB863  C7 86 3A 04 00 00 E5 00 00 00  MOV dword ptr [ESI + 0x43a],0xe5
005DB86D  C7 86 3E 04 00 00 B8 01 00 00  MOV dword ptr [ESI + 0x43e],0x1b8
005DB877  89 9E 26 04 00 00         MOV dword ptr [ESI + 0x426],EBX
005DB87D  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
005DB880  83 F8 FF                  CMP EAX,-0x1
005DB883  74 0A                     JZ 0x005db88f
005DB885  8B 4F 48                  MOV ECX,dword ptr [EDI + 0x48]
005DB888  50                        PUSH EAX
005DB889  51                        PUSH ECX
005DB88A  E8 61 82 0D 00            CALL 0x006b3af0
LAB_005db88f:
005DB88F  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005DB895  53                        PUSH EBX
005DB896  53                        PUSH EBX
005DB897  53                        PUSH EBX
005DB898  8D BE AF 04 00 00         LEA EDI,[ESI + 0x4af]
005DB89E  6A 07                     PUSH 0x7
005DB8A0  6A 31                     PUSH 0x31
005DB8A2  52                        PUSH EDX
005DB8A3  8B CF                     MOV ECX,EDI
005DB8A5  E8 F6 9F 13 00            CALL 0x007158a0
005DB8AA  8B 0D 84 67 80 00         MOV ECX,dword ptr [0x00806784]
005DB8B0  8B 07                     MOV EAX,dword ptr [EDI]
005DB8B2  6A FF                     PUSH -0x1
005DB8B4  68 34 C0 7C 00            PUSH 0x7cc034
005DB8B9  53                        PUSH EBX
005DB8BA  6A 07                     PUSH 0x7
005DB8BC  51                        PUSH ECX
005DB8BD  8B CF                     MOV ECX,EDI
005DB8BF  FF 50 04                  CALL dword ptr [EAX + 0x4]
005DB8C2  C7 86 CB 04 00 00 EB 00 00 00  MOV dword ptr [ESI + 0x4cb],0xeb
005DB8CC  C7 86 CF 04 00 00 D8 00 00 00  MOV dword ptr [ESI + 0x4cf],0xd8
005DB8D6  89 9E B7 04 00 00         MOV dword ptr [ESI + 0x4b7],EBX
005DB8DC  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
005DB8DF  83 F8 FF                  CMP EAX,-0x1
005DB8E2  74 0A                     JZ 0x005db8ee
005DB8E4  8B 57 48                  MOV EDX,dword ptr [EDI + 0x48]
005DB8E7  50                        PUSH EAX
005DB8E8  52                        PUSH EDX
005DB8E9  E8 02 82 0D 00            CALL 0x006b3af0
LAB_005db8ee:
005DB8EE  8B 86 F0 02 00 00         MOV EAX,dword ptr [ESI + 0x2f0]
005DB8F4  6A 01                     PUSH 0x1
005DB8F6  8D 48 28                  LEA ECX,[EAX + 0x28]
005DB8F9  51                        PUSH ECX
005DB8FA  50                        PUSH EAX
005DB8FB  E8 E0 96 0D 00            CALL 0x006b4fe0
005DB900  8B 96 F0 02 00 00         MOV EDX,dword ptr [ESI + 0x2f0]
005DB906  50                        PUSH EAX
005DB907  33 C0                     XOR EAX,EAX
005DB909  66 8B 42 0E               MOV AX,word ptr [EDX + 0xe]
005DB90D  50                        PUSH EAX
005DB90E  68 19 01 00 00            PUSH 0x119
005DB913  68 D5 00 00 00            PUSH 0xd5
005DB918  E8 A3 97 0D 00            CALL 0x006b50c0
005DB91D  89 86 44 05 00 00         MOV dword ptr [ESI + 0x544],EAX
005DB923  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
005DB926  3B CB                     CMP ECX,EBX
005DB928  75 1A                     JNZ 0x005db944
005DB92A  33 C9                     XOR ECX,ECX
005DB92C  66 8B 48 0E               MOV CX,word ptr [EAX + 0xe]
005DB930  0F AF 48 04               IMUL ECX,dword ptr [EAX + 0x4]
005DB934  83 C1 1F                  ADD ECX,0x1f
005DB937  C1 E9 03                  SHR ECX,0x3
005DB93A  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
005DB940  0F AF 48 08               IMUL ECX,dword ptr [EAX + 0x8]
LAB_005db944:
005DB944  50                        PUSH EAX
005DB945  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005DB948  E8 53 96 0D 00            CALL 0x006b4fa0
005DB94D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005DB950  8B F8                     MOV EDI,EAX
005DB952  8B D1                     MOV EDX,ECX
005DB954  83 C8 FF                  OR EAX,0xffffffff
005DB957  C1 E9 02                  SHR ECX,0x2
005DB95A  F3 AB                     STOSD.REP ES:EDI
005DB95C  8B CA                     MOV ECX,EDX
005DB95E  83 E1 03                  AND ECX,0x3
005DB961  F3 AA                     STOSB.REP ES:EDI
005DB963  8B 86 44 05 00 00         MOV EAX,dword ptr [ESI + 0x544]
005DB969  8D BE 40 05 00 00         LEA EDI,[ESI + 0x540]
005DB96F  50                        PUSH EAX
005DB970  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005DB973  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005DB976  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005DB97B  51                        PUSH ECX
005DB97C  52                        PUSH EDX
005DB97D  68 F6 23 40 00            PUSH 0x4023f6
005DB982  6A 31                     PUSH 0x31
005DB984  57                        PUSH EDI
005DB985  50                        PUSH EAX
005DB986  E8 A5 69 0D 00            CALL 0x006b2330
005DB98B  8B 0F                     MOV ECX,dword ptr [EDI]
005DB98D  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005DB993  68 B9 00 00 00            PUSH 0xb9
005DB998  6A 0D                     PUSH 0xd
005DB99A  6A FF                     PUSH -0x1
005DB99C  51                        PUSH ECX
005DB99D  52                        PUSH EDX
005DB99E  E8 9D 7C 0D 00            CALL 0x006b3640
005DB9A3  8B 07                     MOV EAX,dword ptr [EDI]
005DB9A5  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005DB9AB  50                        PUSH EAX
005DB9AC  51                        PUSH ECX
005DB9AD  E8 3E 81 0D 00            CALL 0x006b3af0
005DB9B2  8B 86 F0 02 00 00         MOV EAX,dword ptr [ESI + 0x2f0]
005DB9B8  6A 01                     PUSH 0x1
005DB9BA  8D 50 28                  LEA EDX,[EAX + 0x28]
005DB9BD  52                        PUSH EDX
005DB9BE  50                        PUSH EAX
005DB9BF  E8 1C 96 0D 00            CALL 0x006b4fe0
005DB9C4  50                        PUSH EAX
005DB9C5  8B 86 F0 02 00 00         MOV EAX,dword ptr [ESI + 0x2f0]
005DB9CB  33 C9                     XOR ECX,ECX
005DB9CD  66 8B 48 0E               MOV CX,word ptr [EAX + 0xe]
005DB9D1  51                        PUSH ECX
005DB9D2  6A 14                     PUSH 0x14
005DB9D4  68 86 01 00 00            PUSH 0x186
005DB9D9  E8 E2 96 0D 00            CALL 0x006b50c0
005DB9DE  89 86 82 06 00 00         MOV dword ptr [ESI + 0x682],EAX
005DB9E4  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
005DB9E7  3B CB                     CMP ECX,EBX
005DB9E9  75 1A                     JNZ 0x005dba05
005DB9EB  33 C9                     XOR ECX,ECX
005DB9ED  66 8B 48 0E               MOV CX,word ptr [EAX + 0xe]
005DB9F1  0F AF 48 04               IMUL ECX,dword ptr [EAX + 0x4]
005DB9F5  83 C1 1F                  ADD ECX,0x1f
005DB9F8  C1 E9 03                  SHR ECX,0x3
005DB9FB  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
005DBA01  0F AF 48 08               IMUL ECX,dword ptr [EAX + 0x8]
LAB_005dba05:
005DBA05  50                        PUSH EAX
005DBA06  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005DBA09  E8 92 95 0D 00            CALL 0x006b4fa0
005DBA0E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005DBA11  8B F8                     MOV EDI,EAX
005DBA13  8B D1                     MOV EDX,ECX
005DBA15  83 C8 FF                  OR EAX,0xffffffff
005DBA18  C1 E9 02                  SHR ECX,0x2
005DBA1B  F3 AB                     STOSD.REP ES:EDI
005DBA1D  8B CA                     MOV ECX,EDX
005DBA1F  83 E1 03                  AND ECX,0x3
005DBA22  F3 AA                     STOSB.REP ES:EDI
005DBA24  8B 86 82 06 00 00         MOV EAX,dword ptr [ESI + 0x682]
005DBA2A  8D BE 54 05 00 00         LEA EDI,[ESI + 0x554]
005DBA30  50                        PUSH EAX
005DBA31  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005DBA34  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005DBA37  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005DBA3C  51                        PUSH ECX
005DBA3D  52                        PUSH EDX
005DBA3E  68 F6 23 40 00            PUSH 0x4023f6
005DBA43  6A 31                     PUSH 0x31
005DBA45  57                        PUSH EDI
005DBA46  50                        PUSH EAX
005DBA47  E8 E4 68 0D 00            CALL 0x006b2330
005DBA4C  8B 0F                     MOV ECX,dword ptr [EDI]
005DBA4E  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005DBA54  68 3F 02 00 00            PUSH 0x23f
005DBA59  68 CB 00 00 00            PUSH 0xcb
005DBA5E  6A FF                     PUSH -0x1
005DBA60  51                        PUSH ECX
005DBA61  52                        PUSH EDX
005DBA62  E8 D9 7B 0D 00            CALL 0x006b3640
005DBA67  8B 07                     MOV EAX,dword ptr [EDI]
005DBA69  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005DBA6F  50                        PUSH EAX
005DBA70  51                        PUSH ECX
005DBA71  E8 7A 80 0D 00            CALL 0x006b3af0
005DBA76  6A 01                     PUSH 0x1
005DBA78  6A 01                     PUSH 0x1
005DBA7A  53                        PUSH EBX
005DBA7B  E8 70 9A 0D 00            CALL 0x006b54f0
005DBA80  68 A0 16 80 00            PUSH 0x8016a0
005DBA85  53                        PUSH EBX
005DBA86  50                        PUSH EAX
005DBA87  89 86 86 06 00 00         MOV dword ptr [ESI + 0x686],EAX
005DBA8D  E8 8E A5 0D 00            CALL 0x006b6020
005DBA92  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005DBA98  53                        PUSH EBX
005DBA99  53                        PUSH EBX
005DBA9A  53                        PUSH EBX
005DBA9B  8D BE 5C 05 00 00         LEA EDI,[ESI + 0x55c]
005DBAA1  6A 07                     PUSH 0x7
005DBAA3  6A 31                     PUSH 0x31
005DBAA5  52                        PUSH EDX
005DBAA6  8B CF                     MOV ECX,EDI
005DBAA8  E8 F3 9D 13 00            CALL 0x007158a0
005DBAAD  8B 0D 84 67 80 00         MOV ECX,dword ptr [0x00806784]
005DBAB3  8B 07                     MOV EAX,dword ptr [EDI]
005DBAB5  6A FF                     PUSH -0x1
005DBAB7  68 4C C0 7C 00            PUSH 0x7cc04c
005DBABC  53                        PUSH EBX
005DBABD  6A 07                     PUSH 0x7
005DBABF  51                        PUSH ECX
005DBAC0  8B CF                     MOV ECX,EDI
005DBAC2  FF 50 04                  CALL dword ptr [EAX + 0x4]
005DBAC5  53                        PUSH EBX
005DBAC6  53                        PUSH EBX
005DBAC7  C7 86 78 05 00 00 3A 02 00 00  MOV dword ptr [ESI + 0x578],0x23a
005DBAD1  C7 86 7C 05 00 00 F4 01 00 00  MOV dword ptr [ESI + 0x57c],0x1f4
005DBADB  89 9E 64 05 00 00         MOV dword ptr [ESI + 0x564],EBX
005DBAE1  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005DBAE7  53                        PUSH EBX
005DBAE8  8D BE ED 05 00 00         LEA EDI,[ESI + 0x5ed]
005DBAEE  6A 07                     PUSH 0x7
005DBAF0  6A 31                     PUSH 0x31
005DBAF2  52                        PUSH EDX
005DBAF3  8B CF                     MOV ECX,EDI
005DBAF5  E8 A6 9D 13 00            CALL 0x007158a0
005DBAFA  8B 07                     MOV EAX,dword ptr [EDI]
005DBAFC  6A FF                     PUSH -0x1
005DBAFE  8B 0D 84 67 80 00         MOV ECX,dword ptr [0x00806784]
005DBB04  68 40 C0 7C 00            PUSH 0x7cc040
005DBB09  53                        PUSH EBX
005DBB0A  6A 07                     PUSH 0x7
005DBB0C  51                        PUSH ECX
005DBB0D  8B CF                     MOV ECX,EDI
005DBB0F  FF 50 04                  CALL dword ptr [EAX + 0x4]
005DBB12  8B 86 15 06 00 00         MOV EAX,dword ptr [ESI + 0x615]
005DBB18  BA 3A 02 00 00            MOV EDX,0x23a
005DBB1D  2B D0                     SUB EDX,EAX
005DBB1F  8B 86 F0 02 00 00         MOV EAX,dword ptr [ESI + 0x2f0]
005DBB25  6A 01                     PUSH 0x1
005DBB27  C7 86 09 06 00 00 3A 02 00 00  MOV dword ptr [ESI + 0x609],0x23a
005DBB31  8D 48 28                  LEA ECX,[EAX + 0x28]
005DBB34  89 96 0D 06 00 00         MOV dword ptr [ESI + 0x60d],EDX
005DBB3A  51                        PUSH ECX
005DBB3B  50                        PUSH EAX
005DBB3C  89 9E F5 05 00 00         MOV dword ptr [ESI + 0x5f5],EBX
005DBB42  E8 99 94 0D 00            CALL 0x006b4fe0
005DBB47  8B 96 F0 02 00 00         MOV EDX,dword ptr [ESI + 0x2f0]
005DBB4D  50                        PUSH EAX
005DBB4E  33 C0                     XOR EAX,EAX
005DBB50  66 8B 42 0E               MOV AX,word ptr [EDX + 0xe]
005DBB54  50                        PUSH EAX
005DBB55  6A 49                     PUSH 0x49
005DBB57  68 6D 01 00 00            PUSH 0x16d
005DBB5C  E8 5F 95 0D 00            CALL 0x006b50c0
005DBB61  89 86 7E 06 00 00         MOV dword ptr [ESI + 0x67e],EAX
005DBB67  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
005DBB6A  3B CB                     CMP ECX,EBX
005DBB6C  74 04                     JZ 0x005dbb72
005DBB6E  8B D9                     MOV EBX,ECX
005DBB70  EB 1A                     JMP 0x005dbb8c
LAB_005dbb72:
005DBB72  33 DB                     XOR EBX,EBX
005DBB74  66 8B 58 0E               MOV BX,word ptr [EAX + 0xe]
005DBB78  0F AF 58 04               IMUL EBX,dword ptr [EAX + 0x4]
005DBB7C  83 C3 1F                  ADD EBX,0x1f
005DBB7F  C1 EB 03                  SHR EBX,0x3
005DBB82  81 E3 FC FF FF 1F         AND EBX,0x1ffffffc
005DBB88  0F AF 58 08               IMUL EBX,dword ptr [EAX + 0x8]
LAB_005dbb8c:
005DBB8C  50                        PUSH EAX
005DBB8D  E8 0E 94 0D 00            CALL 0x006b4fa0
005DBB92  8B CB                     MOV ECX,EBX
005DBB94  8B F8                     MOV EDI,EAX
005DBB96  8B D1                     MOV EDX,ECX
005DBB98  83 C8 FF                  OR EAX,0xffffffff
005DBB9B  C1 E9 02                  SHR ECX,0x2
005DBB9E  F3 AB                     STOSD.REP ES:EDI
005DBBA0  8B CA                     MOV ECX,EDX
005DBBA2  81 C6 58 05 00 00         ADD ESI,0x558
005DBBA8  83 E1 03                  AND ECX,0x3
005DBBAB  F3 AA                     STOSB.REP ES:EDI
005DBBAD  8B 86 26 01 00 00         MOV EAX,dword ptr [ESI + 0x126]
005DBBB3  50                        PUSH EAX
005DBBB4  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005DBBB7  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005DBBBA  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005DBBBF  51                        PUSH ECX
005DBBC0  52                        PUSH EDX
005DBBC1  68 F6 23 40 00            PUSH 0x4023f6
005DBBC6  6A 31                     PUSH 0x31
005DBBC8  56                        PUSH ESI
005DBBC9  50                        PUSH EAX
005DBBCA  E8 61 67 0D 00            CALL 0x006b2330
005DBBCF  8B 0E                     MOV ECX,dword ptr [ESI]
005DBBD1  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005DBBD7  68 F3 01 00 00            PUSH 0x1f3
005DBBDC  68 CD 00 00 00            PUSH 0xcd
005DBBE1  6A FF                     PUSH -0x1
005DBBE3  51                        PUSH ECX
005DBBE4  52                        PUSH EDX
005DBBE5  E8 56 7A 0D 00            CALL 0x006b3640
005DBBEA  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
005DBBED  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005DBBF2  33 C0                     XOR EAX,EAX
005DBBF4  5F                        POP EDI
005DBBF5  5E                        POP ESI
005DBBF6  5B                        POP EBX
005DBBF7  8B E5                     MOV ESP,EBP
005DBBF9  5D                        POP EBP
005DBBFA  C3                        RET
LAB_005dbbfb:
005DBBFB  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
005DBBFE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005DBC04  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005DBC07  E8 7A 73 E2 FF            CALL 0x00402f86
005DBC0C  68 78 D7 7C 00            PUSH 0x7cd778
005DBC11  68 CC 4C 7A 00            PUSH 0x7a4ccc
005DBC16  56                        PUSH ESI
005DBC17  53                        PUSH EBX
005DBC18  68 AC 01 00 00            PUSH 0x1ac
005DBC1D  68 18 D7 7C 00            PUSH 0x7cd718
005DBC22  E8 A9 18 0D 00            CALL 0x006ad4d0
005DBC27  83 C4 18                  ADD ESP,0x18
005DBC2A  85 C0                     TEST EAX,EAX
005DBC2C  74 01                     JZ 0x005dbc2f
005DBC2E  CC                        INT3
LAB_005dbc2f:
005DBC2F  68 AD 01 00 00            PUSH 0x1ad
005DBC34  68 18 D7 7C 00            PUSH 0x7cd718
005DBC39  53                        PUSH EBX
005DBC3A  56                        PUSH ESI
005DBC3B  E8 00 A2 0C 00            CALL 0x006a5e40
005DBC40  5F                        POP EDI
005DBC41  5E                        POP ESI
005DBC42  B8 FC FF FF FF            MOV EAX,0xfffffffc
005DBC47  5B                        POP EBX
005DBC48  8B E5                     MOV ESP,EBP
005DBC4A  5D                        POP EBP
005DBC4B  C3                        RET
