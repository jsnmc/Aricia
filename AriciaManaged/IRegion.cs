using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Aricia
{
    interface IRegion
    {
        IMatch find(string targetImagePath);
        IEnumerable<IMatch> findAll(string targetImagePath);
        IMatch wait(string targetImagePath, int timeToWait);
        bool waitVanish(string targetImagePath, int timeToWait);
        IMatch exists(string targetImagePath, int timeToWait);
    }
}
